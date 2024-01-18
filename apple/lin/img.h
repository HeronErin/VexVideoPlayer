#pragma once
const char input[]  = {
  0x7f, 0x96, 0x00, 0x89, 0x7e, 0x7f, 0x82, 0x60, 0x3f, 0x00, 0x87, 0x78, 0x7f, 0xaa, 0x07, 0x00, 
  0x89, 0x7e, 0x7f, 0x81, 0x00, 0x8a, 0x7e, 0x7f, 0xa9, 0x3f, 0x00, 0x8a, 0x7f, 0x81, 0x01, 0x00, 
  0x8a, 0x7f, 0xaa, 0x07, 0x00, 0x89, 0x40, 0x7f, 0x03, 0x00, 0x8a, 0x40, 0x7f, 0xaa, 0x01, 0x00, 
  0x89, 0x40, 0x0f, 0x00, 0x8b, 0x70, 0x7f, 0xa9, 0x1f, 0x00, 0x8a, 0x60, 0x00, 0x8c, 0x78, 0x7f, 
  0xa9, 0x03, 0x00, 0x98, 0x7e, 0x7f, 0xa8, 0x1f, 0x00, 0x99, 0x7f, 0xa9, 0x03, 0x00, 0x98, 0x60, 
  0x7f, 0xa8, 0x3f, 0x00, 0x99, 0x78, 0x7f, 0xa8, 0x07, 0x00, 0x99, 0x7e, 0x7f, 0xa8, 0x00, 0x99, 
  0x40, 0x7f, 0xa8, 0x1f, 0x00, 0x99, 0x70, 0x7f, 0xa8, 0x07, 0x00, 0x99, 0x7c, 0x7f, 0xa8, 0x01, 
  0x00, 0x99, 0x7f, 0xa8, 0x1f, 0x00, 0x99, 0x70, 0x7f, 0xa8, 0x07, 0x00, 0x99, 0x7c, 0x7f, 0xa8, 
  0x00, 0x99, 0x40, 0x7f, 0xa8, 0x1f, 0x00, 0x99, 0x70, 0x7f, 0xa8, 0x07, 0x00, 0x99, 0x7e, 0x7f, 
  0xa8, 0x00, 0x99, 0x40, 0x7f, 0xa8, 0x1f, 0x00, 0x99, 0x78, 0x7f, 0xa8, 0x03, 0x00, 0x99, 0x7e, 
  0x7f, 0xa8, 0x00, 0x9a, 0x7f, 0xa8, 0x1f, 0x00, 0x99, 0x60, 0x7f, 0xa8, 0x07, 0x00, 0x99, 0x70, 
  0x7f, 0xa8, 0x01, 0x00, 0x99, 0x7c, 0x7f, 0xa7, 0x3f, 0x00, 0x9a, 0x7f, 0xa8, 0x1f, 0x00, 0x99, 
  0x40, 0x7f, 0xa8, 0x07, 0x00, 0x99, 0x70, 0x7f, 0xa8, 0x01, 0x00, 0x99, 0x7c, 0x7f, 0xa7, 0x3f, 
  0x00, 0x9a, 0x7f, 0xa8, 0x0f, 0x00, 0x99, 0x40, 0x7f, 0xa8, 0x07, 0x00, 0x99, 0x78, 0x7f, 0xa8, 
  0x01, 0x00, 0x99, 0x7e, 0x7f, 0xa8, 0x00, 0x99, 0x40, 0x7f, 0xa8, 0x3f, 0x00, 0x99, 0x70, 0x7f, 
  0xa8, 0x3f, 0x00, 0x99, 0x7c, 0x7f, 0xa8, 0x0f, 0x00, 0x99, 0x7f, 0xa9, 0x07, 0x00, 0x98, 0x60, 
  0x7f, 0xa9, 0x03, 0x00, 0x98, 0x78, 0x7f, 0xa9, 0x01, 0x00, 0x98, 0x7e, 0x7f, 0xa9, 0x03, 0x00, 
  0x97, 0x40, 0x7f, 0xaa, 0x00, 0x98, 0x78, 0x7f, 0xa9, 0x07, 0x00, 0x98, 0x7e, 0x7f, 0xa8, 0x3f, 
  0x00, 0x98, 0x40, 0x7f, 0xa9, 0x03, 0x00, 0x98, 0x70, 0x7f, 0xa8, 0x1f, 0x00, 0x99, 0x7e, 0x7f, 
  0xa8, 0x01, 0x00, 0x98, 0x40, 0x7f, 0xa8, 0x0f, 0x00, 0x99, 0x70, 0x7f, 0xa8, 0x01, 0x00, 0x99, 
  0x7e, 0x7f, 0xa7, 0x0f, 0x00, 0x99, 0x40, 0x7f, 0xa8, 0x00, 0x9a, 0x70, 0x7f, 0xa7, 0x0f, 0x00, 
  0x9a, 0x7e, 0x7f, 0xa7, 0x00, 0x9a, 0x40, 0x7f, 0xa7, 0x07, 0x00, 0x9a, 0x70, 0x7f, 0xa6, 0x3f, 
  0x00, 0x9b, 0x7e, 0x7f, 0xa6, 0x07, 0x00, 0x9a, 0x40, 0x7f, 0xa6, 0x3f, 0x00, 0x9b, 0x70, 0x7f, 
  0xa6, 0x07, 0x00, 0x9b, 0x7e, 0x7f, 0xa5, 0x3f, 0x00, 0x9b, 0x40, 0x7f, 0xa6, 0x07, 0x00, 0x9b, 
  0x78, 0x7f, 0xa5, 0x3f, 0x00, 0x9c, 0x7e, 0x7f, 0xa5, 0x07, 0x00, 0x9b, 0x60, 0x7f, 0xa5, 0x3f, 
  0x00, 0x9c, 0x78, 0x7f, 0xa5, 0x07, 0x00, 0x9c, 0x7f, 0xa6, 0x00, 0x9c, 0x60, 0x7f, 0xa5, 0x07, 
  0x00, 0x9c, 0x7c, 0x7f, 0xa5, 0x00, 0x9d, 0x7f, 0xa5, 0x0f, 0x00, 0x9c, 0x70, 0x7f, 0xa5, 0x01, 
  0x00, 0x9c, 0x7c, 0x7f, 0xa4, 0x1f, 0x00, 0x9c, 0x40, 0x7f, 0xa5, 0x01, 0x00, 0x9c, 0x70, 0x7f, 
  0xa4, 0x3f, 0x00, 0x9d, 0x7e, 0x7f, 0xa4, 0x07, 0x00, 0x9c, 0x40, 0x7f, 0xa5, 0x00, 0x9d, 0x78, 
  0x7f, 0xa4, 0x0f, 0x00, 0x9d, 0x7f, 0xa5, 0x01, 0x00, 0x9c, 0x60, 0x7f, 0xa4, 0x0f, 0x00, 0x9d, 
  0x7c, 0x7f, 0xa4, 0x01, 0x00, 0x9d, 0x7f, 0xa4, 0x1f, 0x00, 0x9d, 0x70, 0x7f, 0xa4, 0x03, 0x00, 
  0x9d, 0x7c, 0x7f, 0xa3, 0x3f, 0x00, 0x9d, 0x40, 0x7f, 0xa4, 0x03, 0x00, 0x9d, 0x78, 0x7f, 0xa3, 
  0x3f, 0x00, 0x9e, 0x7e, 0x7f, 0xa3, 0x07, 0x00, 0x9d, 0x60, 0x7f, 0xa4, 0x00, 0x9e, 0x7c, 0x7f, 
  0xa3, 0x0f, 0x00, 0x9e, 0x7f, 0xa4, 0x01, 0x00, 0x9d, 0x70, 0x7f, 0xa3, 0x1f, 0x00, 0x9e, 0x7e, 
  0x7f, 0xa3, 0x03, 0x00, 0x9d, 0x40, 0x7f, 0xa3, 0x3f, 0x00, 0x9e, 0x78, 0x7f, 0xa3, 0x07, 0x00, 
  0x9e, 0x7e, 0x7f, 0xa3, 0x00, 0x9e, 0x60, 0x7f, 0xa3, 0x1f, 0x00, 0x9e, 0x7c, 0x7f, 0xa3, 0x03, 
  0x00, 0x9d, 0x40, 0x7f, 0xa3, 0x3f, 0x00, 0x9e, 0x70, 0x7f, 0xa3, 0x07, 0x00, 0x9e, 0x7e, 0x7f, 
  0xa3, 0x00, 0x9e, 0x60, 0x7f, 0xa3, 0x1f, 0x00, 0x9e, 0x78, 0x7f, 0xa3, 0x03, 0x00, 0x9e, 0x7f, 
  0xa3, 0x3f, 0x00, 0x9e, 0x70, 0x7f, 0xa3, 0x07, 0x00, 0x9e, 0x7c, 0x7f, 0xa3, 0x01, 0x00, 0x9d, 
  0x40, 0x7f, 0xa3, 0x1f, 0x00, 0x9e, 0x78, 0x7f, 0xa3, 0x03, 0x00, 0x9e, 0x7e, 0x7f, 0xa2, 0x3f, 
  0x00, 0x9e, 0x60, 0x7f, 0xa3, 0x07, 0x00, 0x9e, 0x7c, 0x7f, 0xa3, 0x00, 0x9f, 0x7f, 0xa3, 0x07, 
  0x00, 0x9e, 0x70, 0x7f, 0xa3, 0x00, 0x9f, 0x7e, 0x7f, 0xa2, 0x4f, 0x00, 0x9e, 0x40, 0x7f, 0xa3, 
  0x1e, 0x00, 0x9e, 0x78, 0x7f, 0xa3, 0x07, 0x00, 0x9e, 0x7f, 0xa4, 0x00, 0x9e, 0x60, 0x7f, 0xa3, 
  0x0f, 0x00, 0x9e, 0x7c, 0x7f, 0xa3, 0x13, 0x00, 0x9d, 0x40, 0x7f, 0xa4, 0x07, 0x00, 0x9d, 0x70, 
  0x7f, 0xa3, 0x6f, 0x03, 0x00, 0x9d, 0x7e, 0x7f, 0xa4, 0x01, 0x00, 0x9c, 0x60, 0x7f, 0xa4, 0x3f, 
  0x00, 0x9d, 0x78, 0x7f, 0xa4, 0x1f, 0x40, 0x01, 0x00, 0x9b, 0x7f, 0xa5, 0x0f, 0x70, 0x00, 0x9b, 
  0x70, 0x7f, 0xa5, 0x07, 0x3c, 0x00, 0x9b, 0x7c, 0x7f, 0xa5, 0x01, 0x1f, 0x00, 0x0e, 0x00, 0x98, 
  0x40, 0x7f, 0xa5, 0x3f, 0x77, 0x1f, 0x40, 0x07, 0x00, 0x98, 0x78, 0x7f, 0xa7, 0x1f, 0x70, 0x03, 
  0x00, 0x97, 0x04, 0x7e, 0x7f, 0xa7, 0x1f, 0x78, 0x01, 0x00, 0x96, 0x40, 0x61, 0x7f, 0xa8, 0x1f, 
  0x3e, 0x00, 0x97, 0x30, 0x78, 0x7f, 0xa9, 0x07, 0x00, 0x97, 0x0e, 0x7f, 0xaa, 0x01, 0x00, 0x96, 
  0x60, 0x63, 0x7f, 0xa9, 0x1f, 0x00, 0x97, 0x78, 0x7c, 0x7f, 0xa9, 0x03, 0x00, 0x97, 0x5f, 0x7f, 
  0xa9, 0x3f, 0x00, 0x97, 0x70, 0x77, 0x7f, 0xa9, 0x07, 0x00, 0x96, 0x02, 0x7c, 0x7d, 0x7f, 0xa9, 
  0x00, 0x96, 0x20, 0x40, 0x7f, 0xaa, 0x07, 0x00, 0x96, 0x08, 0x78, 0x7f, 0xaa, 0x00, 0x97, 0x03, 
  0x7e, 0x7f, 0xa9, 0x07, 0x00, 0x96, 0x30, 0x60, 0x7f, 0xa9, 0x3f, 0x00, 0x97, 0x0c, 0x78, 0x7f, 
  0xa9, 0x07, 0x00, 0x96, 0x40, 0x03, 0x7f, 0xaa, 0x01, 0x00, 0x96, 0x78, 0x60, 0x7f, 0xa9, 0x3f, 
  0x00, 0x97, 0x1e, 0x7c, 0x7f, 0xaa, 0x01, 0x00, 0x95, 0x60, 0x07, 0x7f, 0xaa, 0x3f, 0x00, 0x96, 
  0x78, 0x71, 0x7f, 0xaa, 0x0f, 0x00, 0x96, 0x3f, 0x7c, 0x7f, 0xaa, 0x00, 0x96, 0x60, 0x4f, 0x7f, 
  0xaa, 0x01, 0x00, 0x96, 0x7c, 0x73, 0x7f, 0xa9, 0x1f, 0x00, 0x97, 0x7f, 0x7e, 0x7f, 0xa9, 0x03, 
  0x00, 0x96, 0x60, 0x5f, 0x7f, 0xaa, 0x00, 0x86, 0x20, 0x00, 0x8f, 0x7c, 0x7f, 0xaa, 0x0f, 0x00, 
  0x86, 0x0c, 0x00, 0x8b, 0x10, 0x00, 0x82, 0x7f, 0xab, 0x03, 0x00, 0x85, 0x40, 0x03, 0x00, 0x8b, 
  0x06, 0x00, 0x81, 0x70, 0x7f, 0xaa, 0x3f, 0x00, 0x86, 0x78, 0x01, 0x00, 0x8a, 0x60, 0x00, 0x82, 
  0x7c, 0x7f, 0xaa, 0x07, 0x00, 0x86, 0x3f, 0x00, 0x8b, 0x1c, 0x00, 0x81, 0x40, 0x7f, 0xab, 0x00, 
  0x86, 0x70, 0x07, 0x00, 0x8a, 0x40, 0x03, 0x00, 0x81, 0x70, 0x7f, 0xaa, 0x0f, 0x00, 0x86, 0x7e, 
  0x01, 0x00, 0x8a, 0x78, 0x00, 0x81, 0x30, 0x7e, 0x7f, 0xaa, 0x01, 0x00, 0x85, 0x60, 0x3f, 0x00, 
  0x8b, 0x1f, 0x00, 0x81, 0x7c, 0x7f, 0xaa, 0x1f, 0x00, 0x82, 0x38, 0x00, 0x82, 0x7c, 0x0f, 0x00, 
  0x8a, 0x70, 0x03, 0x00, 0x40, 0x7f, 0xab, 0x03, 0x00, 0x82, 0x1f, 0x00, 0x81, 0x40, 0x7f, 0x03, 
  0x00, 0x8a, 0x7e, 0x00, 0x81, 0x70, 0x7f, 0xab, 0x00, 0x82, 0x70, 0x0f, 0x00, 0x81, 0x78, 0x7f, 
  0x00, 0x8a, 0x60, 0x1f, 0x00, 0x81, 0x7e, 0x7f, 0xaa, 0x0f, 0x00, 0x82, 0x7e, 0x01, 0x00, 0x81, 
  0x7f, 0x1f, 0x00, 0x8a, 0x7c, 0x03, 0x00, 0x40, 0x7f, 0xab, 0x01, 0x00, 0x81, 0x60, 0x3f, 0x00, 
  0x81, 0x60, 0x7f, 0x07, 0x00, 0x89, 0x40, 0x7f, 0x00, 0x81, 0x70, 0x7f, 0xaa, 0x1f, 0x00, 0x82, 
  0x78, 0x07, 0x00, 0x81, 0x7c, 0x7f, 0x00, 0x8a, 0x70, 0x1f, 0x00, 0x81, 0x7e, 0x7f, 0xaa, 0x03, 
  0x00, 0x82, 0x7f, 0x00, 0x81, 0x40, 0x7f, 0x0f, 0x00, 0x8a, 0x7e, 0x03, 0x00, 0x40, 0x7f, 0xaa, 
  0x3f, 0x00, 0x82, 0x70, 0x0f, 0x00, 0x81, 0x70, 0x7f, 0x00, 0x8a, 0x60, 0x7f, 0x00, 0x81, 0x70, 
  0x7f, 0xaa, 0x07, 0x00, 0x82, 0x7e, 0x01, 0x00, 0x81, 0x7c, 0x07, 0x00, 0x8a, 0x7c, 0x1f, 0x00, 
  0x81, 0x7e, 0x7f, 0xaa, 0x01, 0x00, 0x81, 0x60, 0x1f, 0x00, 0x81, 0x60, 0x1f, 0x00, 0x8a, 0x40, 
  0x7f, 0x03, 0x00, 0x40, 0x7f, 0xaa, 0x1f, 0x00, 0x82, 0x7c, 0x01, 0x00, 0x81, 0x7e, 0x01, 0x00, 
  0x8a, 0x70, 0x7f, 0x00, 0x81, 0x78, 0x7f, 0xaa, 0x03, 0x00, 0x81, 0x40, 0x7f, 0x00, 0x81, 0x7c, 
  0x0f, 0x00, 0x8b, 0x7e, 0x1f, 0x00, 0x81, 0x7e, 0x7f, 0xa9, 0x3f, 0x00, 0x82, 0x70, 0x7f, 0x00, 
  0x60, 0x7f, 0x00, 0x8b, 0x60, 0x7f, 0x07, 0x01, 0x61, 0x7f, 0xaa, 0x07, 0x00, 0x82, 0x7e, 0x1f, 
  0x00, 0x7c, 0x07, 0x00, 0x8b, 0x78, 0x7f, 0x31, 0x70, 0x79, 0x7f, 0xaa, 0x00, 0x82, 0x60, 0x7f, 
  0x03, 0x40, 0x3f, 0x00, 0x8c, 0x7f, 0x3f, 0x0c, 0x7c, 0x7f, 0xaa, 0x0f, 0x00, 0x82, 0x7c, 0x3f, 
  0x00, 0x78, 0x03, 0x00, 0x8b, 0x60, 0x7f, 0x4f, 0x43, 0x7f, 0xab, 0x03, 0x00, 0x81, 0x40, 0x7f, 
  0x07, 0x00, 0x1f, 0x00, 0x8c, 0x78, 0x7f, 0x73, 0x70, 0x7f, 0xaa, 0x3f, 0x00, 0x82, 0x78, 0x7f, 
  0x01, 0x70, 0x01, 0x00, 0x8c, 0x7f, 0x81, 0x1e, 0x7e, 0x7f, 0xaa, 0x07, 0x00, 0x82, 0x7f, 0x1f, 
  0x00, 0x06, 0x00, 0x8c, 0x70, 0x7f, 0x5f, 0x47, 0x7f, 0xab, 0x00, 0x82, 0x60, 0x7f, 0x03, 0x00, 
  0x8e, 0x7c, 0x7f, 0x81, 0x79, 0x7f, 0xaa, 0x0f, 0x00, 0x82, 0x7c, 0x7f, 0x00, 0x8e, 0x40, 0x7f, 
  0x81, 0x3f, 0x7e, 0x7f, 0xaa, 0x01, 0x00, 0x81, 0x40, 0x7f, 0x0f, 0x00, 0x8e, 0x70, 0x7f, 0xad, 
  0x1f, 0x00, 0x82, 0x70, 0x7f, 0x01, 0x00, 0x8e, 0x7c, 0x7f, 0xad, 0x03, 0x00, 0x82, 0x7c, 0x1f, 
  0x00, 0x8e, 0x40, 0x7f, 0xae, 0x00, 0x82, 0x40, 0x7f, 0x07, 0x00, 0x8e, 0x70, 0x7f, 0xad, 0x07, 
  0x00, 0x82, 0x78, 0x7f, 0x00, 0x8f, 0x7c, 0x7f, 0xad, 0x00, 0x82, 0x40, 0x7f, 0x0f, 0x00, 0x8e, 
  0x40, 0x7f, 0xad, 0x0f, 0x00, 0x81, 0x60, 0x7f, 0x81, 0x01, 0x00, 0x8e, 0x78, 0x7f, 0xad, 0x71, 
  0x00, 0x81, 0x7c, 0x7f, 0x1f, 0x00, 0x8f, 0x7f, 0xae, 0x0f, 0x00, 0x40, 0x7f, 0x81, 0x01, 0x00, 
  0x8e, 0x60, 0x7f, 0xae, 0x03, 0x00, 0x78, 0x7f, 0x0f, 0x00, 0x8f, 0x78, 0x7f, 0xad, 0x3f, 0x00, 
  0x81, 0x7e, 0x7f, 0x01, 0x00, 0x8f, 0x7e, 0x7f, 0xad, 0x07, 0x00, 0x60, 0x7f, 0x0f, 0x00, 0x8f, 
  0x60, 0x7f, 0xae, 0x01, 0x00, 0x7c, 0x7f, 0x00, 0x90, 0x78, 0x7f, 0xad, 0x1f, 0x00, 0x40, 0x7f, 
  0x0f, 0x00, 0x90, 0x7f, 0xae, 0x03, 0x00, 0x78, 0x7f, 0x00, 0x90, 0x70, 0x7f, 0xad, 0x3f, 0x00, 
  0x81, 0x7f, 0x07, 0x00, 0x90, 0x7c, 0x7f, 0xad, 0x0f, 0x00, 0x70, 0x7f, 0x00, 0x91, 0x7f, 0xae, 
  0x01, 0x00, 0x7e, 0x0f, 0x00, 0x90, 0x60, 0x7f, 0xad, 0x1f, 0x00, 0x70, 0x7f, 0x00, 0x91, 0x7c, 
  0x7f, 0xad, 0x07, 0x00, 0x7e, 0x07, 0x00, 0x91, 0x7f, 0xae, 0x00, 0x60, 0x7f, 0x00, 0x91, 0x70, 
  0x7f, 0xad, 0x0f, 0x00, 0x7c, 0x07, 0x00, 0x91, 0x7e, 0x7f, 0xad, 0x03, 0x40, 0x3f, 0x00, 0x91, 
  0x40, 0x7f, 0xad, 0x3f, 0x00, 0x78, 0x07, 0x00, 0x91, 0x78, 0x7f, 0xad, 0x07, 0x00, 0x7f, 0x00, 
  0x92, 0x7e, 0x7f, 0xad, 0x00, 0x70, 0x0f, 0x00, 0x91, 0x60, 0x7f, 0xad, 0x1f, 0x00, 0x7e, 0x00, 
  0x92, 0x78, 0x7f, 0xad, 0x03, 0x60, 0x0f, 0x00, 0x92, 0x7e, 0x7f, 0xad, 0x00, 0x7c, 0x01, 0x00, 
  0x91, 0x40, 0x7f, 0xad, 0x0f, 0x60, 0x0f, 0x00, 0x92, 0x70, 0x7f, 0xad, 0x01, 0x7c, 0x01, 0x00, 
  0x92, 0x7c, 0x7f, 0xac, 0x1f, 0x40, 0x1f, 0x00, 0x93, 0x7f, 0xad, 0x07, 0x78, 0x01, 0x00, 0x92, 
  0x60, 0x7f, 0xad, 0x00, 0x1f, 0x00, 0x93, 0x78, 0x7f, 0xac, 0x1f, 0x70, 0x01, 0x00, 0x93, 0x7e, 
  0x7f, 0xac, 0x03, 0x1e, 0x00, 0x93, 0x60, 0x7f, 0xac, 0x3f, 0x60, 0x03, 0x00, 0x93, 0x7c, 0x7f, 
  0xac, 0x0f, 0x1c, 0x00, 0x93, 0x60, 0x7f, 0xad, 0x41, 0x03, 0x00, 0x90, 0x04, 0x00, 0x81, 0x7e, 
  0x7f, 0xac, 0x1f, 0x38, 0x00, 0x90, 0x40, 0x00, 0x81, 0x60, 0x7f, 0xad, 0x47, 0x03, 0x00, 0x90, 
  0x08, 0x00, 0x81, 0x7c, 0x7f, 0xad, 0x18, 0x00, 0x94, 0x7f, 0xad, 0x0f, 0x01, 0x00, 0x93, 0x70, 
  0x7f, 0xad, 0x03, 0x00, 0x94, 0x7c, 0x7f, 0xac, 0x3f, 0x00, 0x94, 0x40, 0x7f, 0xad, 0x0f, 0x00, 
  0x94, 0x7c, 0x7f, 0xad, 0x01, 0x00, 0x91, 0x02, 0x00, 0x81, 0x7f, 0xad, 0x3f, 0x00, 0x91, 0x20, 
  0x00, 0x81, 0x70, 0x7f, 0xad, 0x07, 0x00, 0x94, 0x7c, 0x7f, 0x97, 0x7b, 0x7f, 0x81, 0x1f, 0x7c, 
  0x7f, 0x90, 0x00, 0x95, 0x7f, 0x97, 0x1f, 0x7f, 0x1f, 0x00, 0x81, 0x7e, 0x7f, 0x8f, 0x0f, 0x00, 
  0x94, 0x60, 0x7f, 0x97, 0x71, 0x00, 0x83, 0x7e, 0x7f, 0x8f, 0x00, 0x95, 0x7c, 0x7f, 0x96, 0x1f, 
  0x00, 0x84, 0x7f, 0x8f, 0x0f, 0x00, 0x94, 0x40, 0x7f, 0x97, 0x01, 0x00, 0x83, 0x60, 0x7f, 0x8f, 
  0x01, 0x00, 0x94, 0x78, 0x7f, 0x96, 0x07, 0x00, 0x84, 0x78, 0x7f, 0x8e, 0x1f, 0x00, 0x92, 0x01, 
  0x00, 0x81, 0x7e, 0x7f, 0x95, 0x1f, 0x00, 0x85, 0x7e, 0x7f, 0x8e, 0x03, 0x00, 0x91, 0x50, 0x00, 
  0x81, 0x60, 0x7f, 0x96, 0x00, 0x85, 0x40, 0x7f, 0x8e, 0x1f, 0x00, 0x92, 0x0e, 0x00, 0x81, 0x78, 
  0x7f, 0x95, 0x03, 0x00, 0x85, 0x70, 0x7f, 0x8e, 0x03, 0x00, 0x91, 0x60, 0x01, 0x00, 0x81, 0x7f, 
  0x95, 0x0f, 0x00, 0x86, 0x7c, 0x7f, 0x8d, 0x3f, 0x00, 0x92, 0x08, 0x00, 0x81, 0x70, 0x7f, 0x94, 
  0x3f, 0x00, 0x86, 0x40, 0x7f, 0x8e, 0x03, 0x00, 0x92, 0x01, 0x00, 0x81, 0x7e, 0x7f, 0x94, 0x03, 
  0x00, 0x86, 0x70, 0x7f, 0x8d, 0x3f, 0x00, 0x92, 0x30, 0x00, 0x81, 0x60, 0x7f, 0x94, 0x0f, 0x00, 
  0x87, 0x7c, 0x7f, 0x8d, 0x07, 0x00, 0x92, 0x06, 0x00, 0x81, 0x7c, 0x7f, 0x93, 0x3f, 0x00, 0x88, 
  0x7f, 0x8e, 0x00, 0x92, 0x60, 0x00, 0x81, 0x40, 0x7f, 0x94, 0x03, 0x00, 0x87, 0x70, 0x7f, 0x8d, 
  0x0f, 0x00, 0x92, 0x1c, 0x00, 0x81, 0x70, 0x7f, 0x93, 0x1f, 0x00, 0x88, 0x7e, 0x7f, 0x8d, 0x01, 
  0x00, 0x91, 0x40, 0x07, 0x00, 0x81, 0x7c, 0x7f, 0x93, 0x01, 0x00, 0x87, 0x40, 0x7f, 0x8d, 0x0f, 
  0x00, 0x92, 0x70, 0x00, 0x81, 0x40, 0x7f, 0x93, 0x0f, 0x00, 0x88, 0x70, 0x7f, 0x8d, 0x01, 0x00, 
  0x92, 0x0e, 0x00, 0x81, 0x70, 0x7f, 0x93, 0x00, 0x89, 0x7e, 0x7f, 0x8c, 0x1f, 0x00, 0x92, 0x60, 
  0x01, 0x00, 0x81, 0x7c, 0x7f, 0x92, 0x0f, 0x00, 0x88, 0x60, 0x7f, 0x8d, 0x03, 0x00, 0x92, 0x1c, 
  0x00, 0x81, 0x40, 0x7f, 0x93, 0x00, 0x89, 0x7c, 0x7f, 0x8c, 0x3f, 0x00, 0x92, 0x40, 0x03, 0x00, 
  0x81, 0x78, 0x7f, 0x92, 0x0f, 0x00, 0x89, 0x7f, 0x8d, 0x07, 0x00, 0x92, 0x38, 0x00, 0x82, 0x7f, 
  0x93, 0x00, 0x89, 0x70, 0x7f, 0x8d, 0x00, 0x93, 0x06, 0x00, 0x81, 0x60, 0x7f, 0x92, 0x0f, 0x00, 
  0x89, 0x7e, 0x7f, 0x8c, 0x0f, 0x00, 0x92, 0x60, 0x01, 0x00, 0x81, 0x7c, 0x7f, 0x92, 0x01, 0x00, 
  0x88, 0x60, 0x7f, 0x8d, 0x00, 0x93, 0x1c, 0x00, 0x81, 0x40, 0x7f, 0x92, 0x1f, 0x00, 0x89, 0x7c, 
  0x7f, 0x8c, 0x0f, 0x00, 0x92, 0x40, 0x03, 0x00, 0x81, 0x78, 0x7f, 0x92, 0x03, 0x00, 0x89, 0x7f, 
  0x8d, 0x01, 0x00, 0x92, 0x38, 0x00, 0x82, 0x7e, 0x7f, 0x91, 0x3f, 0x00, 0x89, 0x70, 0x7f, 0x8c, 
  0x1f, 0x00, 0x93, 0x0f, 0x00, 0x81, 0x60, 0x7f, 0x92, 0x07, 0x00, 0x89, 0x7e, 0x7f, 0x8c, 0x03, 
  0x00, 0x92, 0x70, 0x01, 0x00, 0x81, 0x7c, 0x7f, 0x92, 0x00, 0x89, 0x60, 0x7f, 0x8c, 0x3f, 0x00, 
  0x93, 0x1c, 0x00, 0x81, 0x40, 0x7f, 0x92, 0x0f, 0x00, 0x89, 0x7c, 0x7f, 0x8c, 0x07, 0x00, 0x92, 
  0x40, 0x03, 0x00, 0x81, 0x70, 0x7f, 0x92, 0x01, 0x00, 0x88, 0x40, 0x7f, 0x8d, 0x00, 0x93, 0x78, 
  0x00, 0x82, 0x7e, 0x7f, 0x91, 0x3f, 0x00, 0x89, 0x60, 0x7f, 0x8c, 0x0f, 0x00, 0x93, 0x0f, 0x00, 
  0x81, 0x60, 0x7f, 0x92, 0x07, 0x00, 0x89, 0x60, 0x7f, 0x8c, 0x01, 0x00, 0x92, 0x70, 0x01, 0x00, 
  0x81, 0x7c, 0x7f, 0x92, 0x00, 0x8a, 0x78, 0x7f, 0x8b, 0x1f, 0x00, 0x93, 0x1c, 0x00, 0x81, 0x40, 
  0x7f, 0x92, 0x0f, 0x00, 0x8a, 0x7c, 0x7f, 0x85, 0x07, 0x00, 0x84, 0x01, 0x00, 0x92, 0x40, 0x07, 
  0x00, 0x81, 0x70, 0x7f, 0x92, 0x03, 0x00, 0x8a, 0x7f, 0x82, 0x3f, 0x00, 0x9c, 0x78, 0x00, 0x82, 
  0x7e, 0x7f, 0x91, 0x3f, 0x00, 0x8a, 0x40, 0x7f, 0x01, 0x00, 0x9e, 0x0f, 0x00, 0x81, 0x40, 0x7f, 
  0x92, 0x07, 0x00, 0xab, 0x70, 0x01, 0x00, 0x81, 0x78, 0x7f, 0x92, 0x00, 0xac, 0x1e, 0x00, 0x82, 
  0x7f, 0x92, 0x1f, 0x00, 0xab, 0x40, 0x03, 0x00, 0x81, 0x70, 0x7f, 0x92, 0x03, 0x00, 0xab, 0x38, 
  0x00, 0x82, 0x7e, 0x7f, 0x92, 0x00, 0xac, 0x07, 0x00, 0x81, 0x40, 0x7f, 0x92, 0x0f, 0x00, 0xab, 
  0x70, 0x00, 0x82, 0x78, 0x7f, 0x85, 0x07
};