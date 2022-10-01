// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTINSTANCESREQUEST_P_H
#define QTAWS_BATCHGETDEPLOYMENTINSTANCESREQUEST_P_H

#include "codedeployrequest_p.h"
#include "batchgetdeploymentinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentInstancesRequest;

class BatchGetDeploymentInstancesRequestPrivate : public CodeDeployRequestPrivate {

public:
    BatchGetDeploymentInstancesRequestPrivate(const CodeDeployRequest::Action action,
                                   BatchGetDeploymentInstancesRequest * const q);
    BatchGetDeploymentInstancesRequestPrivate(const BatchGetDeploymentInstancesRequestPrivate &other,
                                   BatchGetDeploymentInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetDeploymentInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
