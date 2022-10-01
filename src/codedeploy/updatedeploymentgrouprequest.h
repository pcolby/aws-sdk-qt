// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTGROUPREQUEST_H
#define QTAWS_UPDATEDEPLOYMENTGROUPREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class UpdateDeploymentGroupRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT UpdateDeploymentGroupRequest : public CodeDeployRequest {

public:
    UpdateDeploymentGroupRequest(const UpdateDeploymentGroupRequest &other);
    UpdateDeploymentGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeploymentGroupRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
