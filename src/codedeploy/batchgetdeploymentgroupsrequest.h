// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTGROUPSREQUEST_H
#define QTAWS_BATCHGETDEPLOYMENTGROUPSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentGroupsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetDeploymentGroupsRequest : public CodeDeployRequest {

public:
    BatchGetDeploymentGroupsRequest(const BatchGetDeploymentGroupsRequest &other);
    BatchGetDeploymentGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDeploymentGroupsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
