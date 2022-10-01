// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESTATEMENTREQUEST_P_H
#define QTAWS_EXECUTESTATEMENTREQUEST_P_H

#include "rdsdatarequest_p.h"
#include "executestatementrequest.h"

namespace QtAws {
namespace RdsData {

class ExecuteStatementRequest;

class ExecuteStatementRequestPrivate : public RdsDataRequestPrivate {

public:
    ExecuteStatementRequestPrivate(const RdsDataRequest::Action action,
                                   ExecuteStatementRequest * const q);
    ExecuteStatementRequestPrivate(const ExecuteStatementRequestPrivate &other,
                                   ExecuteStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteStatementRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
