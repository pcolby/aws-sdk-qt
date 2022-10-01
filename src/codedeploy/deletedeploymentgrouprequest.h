// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTGROUPREQUEST_H
#define QTAWS_DELETEDEPLOYMENTGROUPREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteDeploymentGroupRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT DeleteDeploymentGroupRequest : public CodeDeployRequest {

public:
    DeleteDeploymentGroupRequest(const DeleteDeploymentGroupRequest &other);
    DeleteDeploymentGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentGroupRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
