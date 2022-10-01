// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESTATEMENTREQUEST_P_H
#define QTAWS_EXECUTESTATEMENTREQUEST_P_H

#include "redshiftdatarequest_p.h"
#include "executestatementrequest.h"

namespace QtAws {
namespace RedshiftData {

class ExecuteStatementRequest;

class ExecuteStatementRequestPrivate : public RedshiftDataRequestPrivate {

public:
    ExecuteStatementRequestPrivate(const RedshiftDataRequest::Action action,
                                   ExecuteStatementRequest * const q);
    ExecuteStatementRequestPrivate(const ExecuteStatementRequestPrivate &other,
                                   ExecuteStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteStatementRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
