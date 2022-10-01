// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTGROUPSREQUEST_P_H
#define QTAWS_BATCHGETDEPLOYMENTGROUPSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "batchgetdeploymentgroupsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentGroupsRequest;

class BatchGetDeploymentGroupsRequestPrivate : public CodeDeployRequestPrivate {

public:
    BatchGetDeploymentGroupsRequestPrivate(const CodeDeployRequest::Action action,
                                   BatchGetDeploymentGroupsRequest * const q);
    BatchGetDeploymentGroupsRequestPrivate(const BatchGetDeploymentGroupsRequestPrivate &other,
                                   BatchGetDeploymentGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetDeploymentGroupsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
