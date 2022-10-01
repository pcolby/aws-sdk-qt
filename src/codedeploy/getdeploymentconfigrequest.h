// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTCONFIGREQUEST_H
#define QTAWS_GETDEPLOYMENTCONFIGREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentConfigRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT GetDeploymentConfigRequest : public CodeDeployRequest {

public:
    GetDeploymentConfigRequest(const GetDeploymentConfigRequest &other);
    GetDeploymentConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentConfigRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
