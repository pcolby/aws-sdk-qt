// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREPAREDSTATEMENTSREQUEST_P_H
#define QTAWS_LISTPREPAREDSTATEMENTSREQUEST_P_H

#include "athenarequest_p.h"
#include "listpreparedstatementsrequest.h"

namespace QtAws {
namespace Athena {

class ListPreparedStatementsRequest;

class ListPreparedStatementsRequestPrivate : public AthenaRequestPrivate {

public:
    ListPreparedStatementsRequestPrivate(const AthenaRequest::Action action,
                                   ListPreparedStatementsRequest * const q);
    ListPreparedStatementsRequestPrivate(const ListPreparedStatementsRequestPrivate &other,
                                   ListPreparedStatementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPreparedStatementsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
