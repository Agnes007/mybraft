// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: braft/errno.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "braft/errno.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace braft {

namespace {

const ::google::protobuf::EnumDescriptor* RaftError_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_braft_2ferrno_2eproto() {
  protobuf_AddDesc_braft_2ferrno_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "braft/errno.proto");
  GOOGLE_CHECK(file != NULL);
  RaftError_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_braft_2ferrno_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_braft_2ferrno_2eproto() {
}

void protobuf_AddDesc_braft_2ferrno_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021braft/errno.proto\022\005braft*\274\002\n\tRaftError"
    "\022\022\n\rERAFTTIMEDOUT\020\221N\022\022\n\rESTATEMACHINE\020\222N"
    "\022\r\n\010ECATCHUP\020\223N\022\023\n\016ELEADERREMOVED\020\224N\022\r\n\010"
    "ESETPEER\020\225N\022\022\n\rENODESHUTDOWN\020\226N\022\027\n\022EHIGH"
    "ERTERMREQUEST\020\227N\022\030\n\023EHIGHERTERMRESPONSE\020"
    "\230N\022\r\n\010EBADNODE\020\231N\022\026\n\021EVOTEFORCANDIDATE\020\232"
    "N\022\017\n\nENEWLEADER\020\233N\022\024\n\017ELEADERCONFLICT\020\234N"
    "\022\030\n\023ETRANSFERLEADERSHIP\020\235N\022\020\n\013ELOGDELETE"
    "D\020\236N\022\023\n\016ENOMOREUSERLOG\020\237N", 345);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "braft/errno.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_braft_2ferrno_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_braft_2ferrno_2eproto {
  StaticDescriptorInitializer_braft_2ferrno_2eproto() {
    protobuf_AddDesc_braft_2ferrno_2eproto();
  }
} static_descriptor_initializer_braft_2ferrno_2eproto_;
const ::google::protobuf::EnumDescriptor* RaftError_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RaftError_descriptor_;
}
bool RaftError_IsValid(int value) {
  switch(value) {
    case 10001:
    case 10002:
    case 10003:
    case 10004:
    case 10005:
    case 10006:
    case 10007:
    case 10008:
    case 10009:
    case 10010:
    case 10011:
    case 10012:
    case 10013:
    case 10014:
    case 10015:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace braft

// @@protoc_insertion_point(global_scope)
