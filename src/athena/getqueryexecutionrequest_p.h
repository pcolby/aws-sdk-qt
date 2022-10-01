// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYEXECUTIONREQUEST_P_H
#define QTAWS_GETQUERYEXECUTIONREQUEST_P_H

#include "athenarequest_p.h"
#include "getqueryexecutionrequest.h"

namespace QtAws {
namespace Athena {

class GetQueryExecutionRequest;

class GetQueryExecutionRequestPrivate : public AthenaRequestPrivate {

public:
    GetQueryExecutionRequestPrivate(const AthenaRequest::Action action,
                                   GetQueryExecutionRequest * const q);
    GetQueryExecutionRequestPrivate(const GetQueryExecutionRequestPrivate &other,
                                   GetQueryExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueryExecutionRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
