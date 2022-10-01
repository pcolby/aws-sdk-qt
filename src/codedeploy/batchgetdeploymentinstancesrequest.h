// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTINSTANCESREQUEST_H
#define QTAWS_BATCHGETDEPLOYMENTINSTANCESREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentInstancesRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetDeploymentInstancesRequest : public CodeDeployRequest {

public:
    BatchGetDeploymentInstancesRequest(const BatchGetDeploymentInstancesRequest &other);
    BatchGetDeploymentInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDeploymentInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
