// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDEPLOYMENTREQUEST_H
#define QTAWS_STOPDEPLOYMENTREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class StopDeploymentRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT StopDeploymentRequest : public CodeDeployRequest {

public:
    StopDeploymentRequest(const StopDeploymentRequest &other);
    StopDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDeploymentRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
