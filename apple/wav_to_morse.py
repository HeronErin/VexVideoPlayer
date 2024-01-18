# Copyright (C) 2024 HeronErin
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 3 of the
# License, or (at your option) any later version.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import soundfile as sf
import numpy as np

class MorseConverter:
    def __init__(self, file_path):
        self.file_path = file_path
        self.audio_data, self.sample_rate = sf.read(file_path)
        
        self.threshold = 0.3  # Adjust the threshold as needed
        self.base_unit = 50 / 1000 # 50 ms

        self.samples_per = int(self.sample_rate * self.base_unit)
        print(self.sample_rate * self.base_unit)


    def convert_to_morse(self):
        morse_code = ''
        bump_duration = 0
        is_bump = False


        for i in range(0, len(self.audio_data), self.samples_per):
            # print(i)

            chunk = self.audio_data[i:i + self.samples_per]
            
            rms = np.sqrt(np.mean(chunk**2))
            # print(rms)
            if rms > self.threshold:
                bump_duration += 1
                is_bump = True
            else:
                if is_bump:
                    while bump_duration:
                        if bump_duration >= 2:
                            morse_code+="-"
                            bump_duration-=2
                        else:
                            morse_code+="."
                            bump_duration-=1
                else:
                    morse_code += " "
                is_bump = False
                bump_duration = 0
        if is_bump:
            while bump_duration:
                if bump_duration >= 2:
                    morse_code+="-"
                    bump_duration-=2
                else:
                    morse_code+="."
                    bump_duration-=1
        #         if is_bump:
        #             if bump_duration > self.sample_rate / 10:  # Long bump duration
        #                 morse_code += '-'
        #             elif bump_duration > self.sample_rate / 40:  # Short bump duration
        #                 morse_code += '.'
        #             bump_duration = 0  # Reset bump duration
        #             is_bump = False
        #         else:
        #             morse_code += ' '  # Add space for silent period
            # break

        return morse_code
unit = 50  # Change this value to alter the time unit

def generate_wave(frequency, duration, sample_rate=8000):
    t = np.linspace(0, duration, int(sample_rate * duration), endpoint=False)
    wave = np.sin(2 * np.pi * frequency * t)
    return wave

def morse_to_wave(morse_text):
    dot_duration = unit / 1000
    dash_duration = 2 * dot_duration
    space_duration = dot_duration
    
    audio_wave = np.array([], dtype=np.float32)
    
    for char in morse_text:
        if char == ' ':
            audio_wave = np.append(audio_wave, np.zeros(int(space_duration * 8000)))
        elif char == '.':
            audio_wave = np.append(audio_wave, generate_wave(440, dot_duration))
            # audio_wave = np.append(audio_wave, np.zeros(int(dot_duration * 8000)))
        elif char == '-':
            audio_wave = np.append(audio_wave, generate_wave(440, dash_duration))
            # audio_wave = np.append(audio_wave, np.zeros(int(dot_duration * 8000)))
    
    return audio_wave
from scipy.io import wavfile

file_path = 'apple.wav'
morse_converter = MorseConverter(file_path)
morse_result = morse_converter.convert_to_morse()

# # print("Morse code approximation:")
# # print(morse_result)

# f = open("morse_result", "w")
# f.write(morse_result)
# f.close()
wavfile.write('morse_code.wav', 8000, morse_to_wave(morse_result))