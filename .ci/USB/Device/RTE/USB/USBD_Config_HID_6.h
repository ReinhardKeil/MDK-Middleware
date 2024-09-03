/*------------------------------------------------------------------------------
 * MDK Middleware - Component ::USB:Device
 * Copyright (c) 2004-2024 Arm Limited (or its affiliates). All rights reserved.
 *------------------------------------------------------------------------------
 * Name:    USBD_Config_HID_6.h
 * Purpose: USB Device Human Interface Device class (HID) Configuration
 * Rev.:    V5.1.1
 *----------------------------------------------------------------------------*/

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------
//------ With VS Code: Open Preview for Configuration Wizard -------------------

// <h>USB Device: Human Interface Device class (HID) 6
//   <o>Assign Device Class to USB Device # <0-3>
//   <i>Select USB Device that is used for this Device Class instance
#define USBD_HID6_DEV                             2

//   <h>Interrupt Endpoint Settings
//   <i>By default, the settings match the first USB Class instance in a USB Device.
//   <i>Endpoint conflicts are flagged by compile-time error messages.
//
//     <h>Interrupt IN Endpoint Settings
//       <o.0..3>Interrupt IN Endpoint Number
//                 <1=>1   <2=>2   <3=>3   <4=>4   <5=>5   <6=>6   <7=>7
//         <8=>8   <9=>9   <10=>10 <11=>11 <12=>12 <13=>13 <14=>14 <15=>15
#define USBD_HID6_EP_INT_IN                       11

//       <h>Endpoint Settings
//         <i>Parameters are used to create Endpoint Descriptors
//         <i>and for memory allocation in the USB component.
//
//         <h>Full/Low-speed (High-speed disabled)
//         <i>Parameters apply when High-speed is disabled in USBD_Config_n.h
//           <o.0..6>Maximum Endpoint Packet Size (in bytes) <0-64>
//           <i>Specifies the physical packet size used for information exchange.
//           <i>Maximum value is 64.
#define USBD_HID6_EP_INT_IN_WMAXPACKETSIZE        4

//           <o.0..7>Endpoint polling Interval (in ms) <1-255>
//           <i>Specifies the frequency of requests initiated by USB Host for getting data.
#define USBD_HID6_EP_INT_IN_BINTERVAL             16

//         </h>

//         <h>High-speed
//         <i>Parameters apply when High-speed is enabled in USBD_Config_n.h
//
//           <o.0..10>Maximum Endpoint Packet Size (in bytes) <0-1024>
//           <i>Specifies the physical packet size used for information exchange.
//           <i>Maximum value is 1024.
//           <o.11..12>Additional transactions per microframe
//           <i>Additional transactions improve communication performance.
//             <0=>None <1=>1 additional <2=>2 additional
#define USBD_HID6_EP_INT_IN_HS_WMAXPACKETSIZE     4

//           <o.0..4>Endpoint polling Interval (in 125 us intervals)
//           <i>Specifies the frequency of requests initiated by USB Host for getting data.
//             <1=>    1 <2=>    2 <3=>     4 <4=>     8
//             <5=>   16 <6=>   32 <7=>    64 <8=>   128
//             <9=>  256 <10=> 512 <11=> 1024 <12=> 2048
//             <13=>4096 <14=>8192 <15=>16384 <16=>32768
#define USBD_HID6_EP_INT_IN_HS_BINTERVAL          5

//         </h>
//       </h>
//     </h>

//     <h>Interrupt OUT Endpoint Settings
//       <o.0..3>Interrupt OUT Endpoint Number
//         <i>When OUT Endpoint is set to "Not used" the USB Host uses
//         <i>the Control Endpoint 0 for Out Reports.
//         <0=>Not used
//                 <1=>1   <2=>2   <3=>3   <4=>4   <5=>5   <6=>6   <7=>7
//         <8=>8   <9=>9   <10=>10 <11=>11 <12=>12 <13=>13 <14=>14 <15=>15
#define USBD_HID6_EP_INT_OUT                      11

//       <h>Endpoint Settings
//         <i>Parameters are used to create USB Descriptors, HID Device Descriptor
//         <i>and for memory allocation in the USB component.
//
//         <h>Full/Low-speed (High-speed disabled)
//         <i>Parameters apply when High-speed is disabled in USBD_Config_n.h
//           <o.0..6>Maximum Endpoint Packet Size (in bytes) <0-64>
//           <i>Specifies the physical packet size used for information exchange.
//           <i>Maximum value is 64.
#define USBD_HID6_EP_INT_OUT_WMAXPACKETSIZE       4

//           <o.0..7>Endpoint polling Interval (in ms) <1-255>
//           <i>Specifies the frequency of requests sent by USB Host for setting data.
#define USBD_HID6_EP_INT_OUT_BINTERVAL            16

//         </h>

//         <h>High-speed
//         <i>Parameters apply when High-speed is enabled in USBD_Config_n.h
//
//           <o.0..10>Maximum Endpoint Packet Size (in bytes) <0-1024>
//           <i>Specifies the physical packet size used for information exchange.
//           <i>Maximum value is 1024.
//           <o.11..12>Additional transactions per microframe
//           <i>Additional transactions improve communication performance.
//             <0=>None <1=>1 additional <2=>2 additional
#define USBD_HID6_EP_INT_OUT_HS_WMAXPACKETSIZE    4

//           <o.0..4>Endpoint polling Interval (in 125 us intervals)
//           <i>Specifies the frequency of requests sent by USB Host for setting data.
//             <1=>    1 <2=>    2 <3=>     4 <4=>     8
//             <5=>   16 <6=>   32 <7=>    64 <8=>   128
//             <9=>  256 <10=> 512 <11=> 1024 <12=> 2048
//             <13=>4096 <14=>8192 <15=>16384 <16=>32768
#define USBD_HID6_EP_INT_OUT_HS_BINTERVAL         5

//         </h>
//       </h>
//     </h>
//   </h>

//   <h>Human Interface Device Class Settings
//   <i>Parameters are used to create USB Descriptors, USB HID Report Descriptor
//   <i>and for memory allocation in the USB component.
//
//     <s.126>HID Interface String
#define USBD_HID6_STR_DESC_RAW                    "USB_HID6"

//     <o.0..4>Number of Input Reports <1-32>
//     <i>Configures max 'rid' value for USBD_HID6_GetReport and USBD_HID_GetReportTrigger
#define USBD_HID6_IN_REPORT_NUM                   1

//     <o.0..4>Number of Output Reports <1-32>
//     <i>Configures max 'rid' value for USBD_HID6_SetReport
#define USBD_HID6_OUT_REPORT_NUM                  1

//     <o.0..15>Maximum Input Report Size (in bytes) <1-65535>
//     <i>Allocates memory and configures 'len' value for USBD_HID6_GetReport
//     <i>and USBD_HID_GetReportTrigger
#define USBD_HID6_IN_REPORT_MAX_SZ                1

//     <o.0..15>Maximum Output Report Size (in bytes) <1-65535>
//     <i>Allocates memory and configures 'len' value for USBD_HID6_SetReport
//     <i>when rtype=HID_REPORT_OUTPUT.
#define USBD_HID6_OUT_REPORT_MAX_SZ               1

//     <o.0..15>Maximum Feature Report Size (in bytes) <1-65535>
//     <i>Allocates memory and configures 'len' value for USBD_HID6_SetReport
//     <i>when rtype=HID_REPORT_FEATURE
#define USBD_HID6_FEAT_REPORT_MAX_SZ              1

//     <e.0>Use User Provided HID Report Descriptor
//     <i>User needs to provide HID Report Descriptor in array
//     <i>const uint8_t usbd_hid6_report_descriptor[]
#define USBD_HID6_USER_REPORT_DESCRIPTOR          0

//       <o>User Provided HID Report Descriptor Size (in bytes) <1-65535>
#define USBD_HID6_USER_REPORT_DESCRIPTOR_SIZE     33

//     </e>
//   </h>

//   <h>OS Resources Settings
//   <i>These settings are used to optimize usage of OS resources.
//     <o>Human Interface Device Class Thread Stack Size <64-65536>
#define USBD_HID6_THREAD_STACK_SIZE               512

//        Human Interface Device Class Thread Priority
#define USBD_HID6_THREAD_PRIORITY                 osPriorityAboveNormal

//   </h>
// </h>
