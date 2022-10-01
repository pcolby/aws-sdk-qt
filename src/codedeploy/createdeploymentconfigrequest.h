// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTCONFIGREQUEST_H
#define QTAWS_CREATEDEPLOYMENTCONFIGREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class CreateDeploymentConfigRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT CreateDeploymentConfigRequest : public CodeDeployRequest {

public:
    CreateDeploymentConfigRequest(const CreateDeploymentConfigRequest &other);
    CreateDeploymentConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentConfigRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
