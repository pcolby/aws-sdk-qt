// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMEDQUERIESREQUEST_P_H
#define QTAWS_LISTNAMEDQUERIESREQUEST_P_H

#include "athenarequest_p.h"
#include "listnamedqueriesrequest.h"

namespace QtAws {
namespace Athena {

class ListNamedQueriesRequest;

class ListNamedQueriesRequestPrivate : public AthenaRequestPrivate {

public:
    ListNamedQueriesRequestPrivate(const AthenaRequest::Action action,
                                   ListNamedQueriesRequest * const q);
    ListNamedQueriesRequestPrivate(const ListNamedQueriesRequestPrivate &other,
                                   ListNamedQueriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNamedQueriesRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
