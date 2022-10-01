// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAPPLICATIONSREQUEST_P_H
#define QTAWS_BATCHGETAPPLICATIONSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "batchgetapplicationsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetApplicationsRequest;

class BatchGetApplicationsRequestPrivate : public CodeDeployRequestPrivate {

public:
    BatchGetApplicationsRequestPrivate(const CodeDeployRequest::Action action,
                                   BatchGetApplicationsRequest * const q);
    BatchGetApplicationsRequestPrivate(const BatchGetApplicationsRequestPrivate &other,
                                   BatchGetApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetApplicationsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
