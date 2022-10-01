// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEEVENTHOOKEXECUTIONSTATUSREQUEST_H
#define QTAWS_PUTLIFECYCLEEVENTHOOKEXECUTIONSTATUSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class PutLifecycleEventHookExecutionStatusRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT PutLifecycleEventHookExecutionStatusRequest : public CodeDeployRequest {

public:
    PutLifecycleEventHookExecutionStatusRequest(const PutLifecycleEventHookExecutionStatusRequest &other);
    PutLifecycleEventHookExecutionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecycleEventHookExecutionStatusRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
