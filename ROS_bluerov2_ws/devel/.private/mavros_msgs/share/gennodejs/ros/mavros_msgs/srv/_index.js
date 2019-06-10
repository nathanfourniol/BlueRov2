
"use strict";

let FileRemove = require('./FileRemove.js')
let FileRead = require('./FileRead.js')
let FileChecksum = require('./FileChecksum.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let CommandTOL = require('./CommandTOL.js')
let CommandInt = require('./CommandInt.js')
let StreamRate = require('./StreamRate.js')
let WaypointPush = require('./WaypointPush.js')
let FileTruncate = require('./FileTruncate.js')
let CommandBool = require('./CommandBool.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let FileOpen = require('./FileOpen.js')
let FileRename = require('./FileRename.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let MessageInterval = require('./MessageInterval.js')
let CommandLong = require('./CommandLong.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let SetMavFrame = require('./SetMavFrame.js')
let FileList = require('./FileList.js')
let ParamSet = require('./ParamSet.js')
let FileMakeDir = require('./FileMakeDir.js')
let ParamGet = require('./ParamGet.js')
let FileClose = require('./FileClose.js')
let LogRequestList = require('./LogRequestList.js')
let WaypointClear = require('./WaypointClear.js')
let ParamPull = require('./ParamPull.js')
let ParamPush = require('./ParamPush.js')
let FileWrite = require('./FileWrite.js')
let CommandHome = require('./CommandHome.js')
let WaypointPull = require('./WaypointPull.js')
let LogRequestData = require('./LogRequestData.js')
let SetMode = require('./SetMode.js')

module.exports = {
  FileRemove: FileRemove,
  FileRead: FileRead,
  FileChecksum: FileChecksum,
  CommandTriggerControl: CommandTriggerControl,
  CommandTOL: CommandTOL,
  CommandInt: CommandInt,
  StreamRate: StreamRate,
  WaypointPush: WaypointPush,
  FileTruncate: FileTruncate,
  CommandBool: CommandBool,
  FileRemoveDir: FileRemoveDir,
  LogRequestEnd: LogRequestEnd,
  VehicleInfoGet: VehicleInfoGet,
  FileOpen: FileOpen,
  FileRename: FileRename,
  WaypointSetCurrent: WaypointSetCurrent,
  MessageInterval: MessageInterval,
  CommandLong: CommandLong,
  CommandTriggerInterval: CommandTriggerInterval,
  SetMavFrame: SetMavFrame,
  FileList: FileList,
  ParamSet: ParamSet,
  FileMakeDir: FileMakeDir,
  ParamGet: ParamGet,
  FileClose: FileClose,
  LogRequestList: LogRequestList,
  WaypointClear: WaypointClear,
  ParamPull: ParamPull,
  ParamPush: ParamPush,
  FileWrite: FileWrite,
  CommandHome: CommandHome,
  WaypointPull: WaypointPull,
  LogRequestData: LogRequestData,
  SetMode: SetMode,
};
