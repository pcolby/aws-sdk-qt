// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPREPAREDSTATEMENTREQUEST_P_H
#define QTAWS_BATCHGETPREPAREDSTATEMENTREQUEST_P_H

#include "athenarequest_p.h"
#include "batchgetpreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class BatchGetPreparedStatementRequest;

class BatchGetPreparedStatementRequestPrivate : public AthenaRequestPrivate {

public:
    BatchGetPreparedStatementRequestPrivate(const AthenaRequest::Action action,
                                   BatchGetPreparedStatementRequest * const q);
    BatchGetPreparedStatementRequestPrivate(const BatchGetPreparedStatementRequestPrivate &other,
                                   BatchGetPreparedStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetPreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
