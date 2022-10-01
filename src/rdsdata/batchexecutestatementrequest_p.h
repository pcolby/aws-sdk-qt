// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEXECUTESTATEMENTREQUEST_P_H
#define QTAWS_BATCHEXECUTESTATEMENTREQUEST_P_H

#include "rdsdatarequest_p.h"
#include "batchexecutestatementrequest.h"

namespace QtAws {
namespace RdsData {

class BatchExecuteStatementRequest;

class BatchExecuteStatementRequestPrivate : public RdsDataRequestPrivate {

public:
    BatchExecuteStatementRequestPrivate(const RdsDataRequest::Action action,
                                   BatchExecuteStatementRequest * const q);
    BatchExecuteStatementRequestPrivate(const BatchExecuteStatementRequestPrivate &other,
                                   BatchExecuteStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchExecuteStatementRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
