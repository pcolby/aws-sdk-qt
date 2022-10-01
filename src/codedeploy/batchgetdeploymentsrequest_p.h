// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTSREQUEST_P_H
#define QTAWS_BATCHGETDEPLOYMENTSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "batchgetdeploymentsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentsRequest;

class BatchGetDeploymentsRequestPrivate : public CodeDeployRequestPrivate {

public:
    BatchGetDeploymentsRequestPrivate(const CodeDeployRequest::Action action,
                                   BatchGetDeploymentsRequest * const q);
    BatchGetDeploymentsRequestPrivate(const BatchGetDeploymentsRequestPrivate &other,
                                   BatchGetDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetDeploymentsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
