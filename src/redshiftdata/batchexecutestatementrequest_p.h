// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEXECUTESTATEMENTREQUEST_P_H
#define QTAWS_BATCHEXECUTESTATEMENTREQUEST_P_H

#include "redshiftdatarequest_p.h"
#include "batchexecutestatementrequest.h"

namespace QtAws {
namespace RedshiftData {

class BatchExecuteStatementRequest;

class BatchExecuteStatementRequestPrivate : public RedshiftDataRequestPrivate {

public:
    BatchExecuteStatementRequestPrivate(const RedshiftDataRequest::Action action,
                                   BatchExecuteStatementRequest * const q);
    BatchExecuteStatementRequestPrivate(const BatchExecuteStatementRequestPrivate &other,
                                   BatchExecuteStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchExecuteStatementRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
