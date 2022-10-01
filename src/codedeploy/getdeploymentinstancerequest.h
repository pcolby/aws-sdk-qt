// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTINSTANCEREQUEST_H
#define QTAWS_GETDEPLOYMENTINSTANCEREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentInstanceRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT GetDeploymentInstanceRequest : public CodeDeployRequest {

public:
    GetDeploymentInstanceRequest(const GetDeploymentInstanceRequest &other);
    GetDeploymentInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
