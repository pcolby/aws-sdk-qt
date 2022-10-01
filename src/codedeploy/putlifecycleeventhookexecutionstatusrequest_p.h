// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEEVENTHOOKEXECUTIONSTATUSREQUEST_P_H
#define QTAWS_PUTLIFECYCLEEVENTHOOKEXECUTIONSTATUSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "putlifecycleeventhookexecutionstatusrequest.h"

namespace QtAws {
namespace CodeDeploy {

class PutLifecycleEventHookExecutionStatusRequest;

class PutLifecycleEventHookExecutionStatusRequestPrivate : public CodeDeployRequestPrivate {

public:
    PutLifecycleEventHookExecutionStatusRequestPrivate(const CodeDeployRequest::Action action,
                                   PutLifecycleEventHookExecutionStatusRequest * const q);
    PutLifecycleEventHookExecutionStatusRequestPrivate(const PutLifecycleEventHookExecutionStatusRequestPrivate &other,
                                   PutLifecycleEventHookExecutionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLifecycleEventHookExecutionStatusRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
