// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETQUERYEXECUTIONREQUEST_P_H
#define QTAWS_BATCHGETQUERYEXECUTIONREQUEST_P_H

#include "athenarequest_p.h"
#include "batchgetqueryexecutionrequest.h"

namespace QtAws {
namespace Athena {

class BatchGetQueryExecutionRequest;

class BatchGetQueryExecutionRequestPrivate : public AthenaRequestPrivate {

public:
    BatchGetQueryExecutionRequestPrivate(const AthenaRequest::Action action,
                                   BatchGetQueryExecutionRequest * const q);
    BatchGetQueryExecutionRequestPrivate(const BatchGetQueryExecutionRequestPrivate &other,
                                   BatchGetQueryExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetQueryExecutionRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
