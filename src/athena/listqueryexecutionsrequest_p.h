// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYEXECUTIONSREQUEST_P_H
#define QTAWS_LISTQUERYEXECUTIONSREQUEST_P_H

#include "athenarequest_p.h"
#include "listqueryexecutionsrequest.h"

namespace QtAws {
namespace Athena {

class ListQueryExecutionsRequest;

class ListQueryExecutionsRequestPrivate : public AthenaRequestPrivate {

public:
    ListQueryExecutionsRequestPrivate(const AthenaRequest::Action action,
                                   ListQueryExecutionsRequest * const q);
    ListQueryExecutionsRequestPrivate(const ListQueryExecutionsRequestPrivate &other,
                                   ListQueryExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQueryExecutionsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
