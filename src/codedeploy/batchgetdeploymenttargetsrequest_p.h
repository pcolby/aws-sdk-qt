// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTTARGETSREQUEST_P_H
#define QTAWS_BATCHGETDEPLOYMENTTARGETSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "batchgetdeploymenttargetsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentTargetsRequest;

class BatchGetDeploymentTargetsRequestPrivate : public CodeDeployRequestPrivate {

public:
    BatchGetDeploymentTargetsRequestPrivate(const CodeDeployRequest::Action action,
                                   BatchGetDeploymentTargetsRequest * const q);
    BatchGetDeploymentTargetsRequestPrivate(const BatchGetDeploymentTargetsRequestPrivate &other,
                                   BatchGetDeploymentTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetDeploymentTargetsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
