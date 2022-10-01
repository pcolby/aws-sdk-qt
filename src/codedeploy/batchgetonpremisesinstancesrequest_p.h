// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETONPREMISESINSTANCESREQUEST_P_H
#define QTAWS_BATCHGETONPREMISESINSTANCESREQUEST_P_H

#include "codedeployrequest_p.h"
#include "batchgetonpremisesinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetOnPremisesInstancesRequest;

class BatchGetOnPremisesInstancesRequestPrivate : public CodeDeployRequestPrivate {

public:
    BatchGetOnPremisesInstancesRequestPrivate(const CodeDeployRequest::Action action,
                                   BatchGetOnPremisesInstancesRequest * const q);
    BatchGetOnPremisesInstancesRequestPrivate(const BatchGetOnPremisesInstancesRequestPrivate &other,
                                   BatchGetOnPremisesInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetOnPremisesInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
