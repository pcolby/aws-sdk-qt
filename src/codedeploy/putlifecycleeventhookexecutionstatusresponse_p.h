// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEEVENTHOOKEXECUTIONSTATUSRESPONSE_P_H
#define QTAWS_PUTLIFECYCLEEVENTHOOKEXECUTIONSTATUSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class PutLifecycleEventHookExecutionStatusResponse;

class PutLifecycleEventHookExecutionStatusResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit PutLifecycleEventHookExecutionStatusResponsePrivate(PutLifecycleEventHookExecutionStatusResponse * const q);

    void parsePutLifecycleEventHookExecutionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLifecycleEventHookExecutionStatusResponse)
    Q_DISABLE_COPY(PutLifecycleEventHookExecutionStatusResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
