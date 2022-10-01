// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREPAREDSTATEMENTREQUEST_P_H
#define QTAWS_GETPREPAREDSTATEMENTREQUEST_P_H

#include "athenarequest_p.h"
#include "getpreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class GetPreparedStatementRequest;

class GetPreparedStatementRequestPrivate : public AthenaRequestPrivate {

public:
    GetPreparedStatementRequestPrivate(const AthenaRequest::Action action,
                                   GetPreparedStatementRequest * const q);
    GetPreparedStatementRequestPrivate(const GetPreparedStatementRequestPrivate &other,
                                   GetPreparedStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
