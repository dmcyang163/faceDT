/*    Copyright 2014 MongoDB Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#pragma once

#define MONGOCLIENT_VERSION_MAJOR 1
#define MONGOCLIENT_VERSION_MINOR 1
#define MONGOCLIENT_VERSION_PATCH 3

#define MONGOCLIENT_VERSION                      \
    ((MONGOCLIENT_VERSION_MAJOR * 10000) +       \
     (MONGOCLIENT_VERSION_MINOR * 100) +         \
     MONGOCLIENT_VERSION_PATCH)                  \

namespace mongo {
namespace client {

    const unsigned int kVersionMajor = MONGOCLIENT_VERSION_MAJOR;
    const unsigned int kVersionMinor = MONGOCLIENT_VERSION_MINOR;
    const unsigned int kVersionPatch = MONGOCLIENT_VERSION_PATCH;

    const unsigned int kVersion = MONGOCLIENT_VERSION;

    // The string version of the library.
    // TOOD: should the value of this be here, or buried in a .cpp file as an extern?
    const char kVersionString[] = "1.1.3-rc0-pre";

    // The stringified SHA1 of the revision from which this binary was built.
    // TODO: should the value of this be here, or buried on a .cpp file as an extern?
    const char kGitRevision[] = "dca7dd6971573af014606b151834ad82c7d56bb0";

} // namespace client
} // namespace mongo
