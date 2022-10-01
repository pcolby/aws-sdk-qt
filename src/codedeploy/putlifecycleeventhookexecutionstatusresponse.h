// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEEVENTHOOKEXECUTIONSTATUSRESPONSE_H
#define QTAWS_PUTLIFECYCLEEVENTHOOKEXECUTIONSTATUSRESPONSE_H

#include "codedeployresponse.h"
#include "putlifecycleeventhookexecutionstatusrequest.h"

namespace QtAws {
namespace CodeDeploy {

class PutLifecycleEventHookExecutionStatusResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT PutLifecycleEventHookExecutionStatusResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    PutLifecycleEventHookExecutionStatusResponse(const PutLifecycleEventHookExecutionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLifecycleEventHookExecutionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecycleEventHookExecutionStatusResponse)
    Q_DISABLE_COPY(PutLifecycleEventHookExecutionStatusResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
