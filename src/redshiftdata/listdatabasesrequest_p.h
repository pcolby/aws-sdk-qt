// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATABASESREQUEST_P_H
#define QTAWS_LISTDATABASESREQUEST_P_H

#include "redshiftdatarequest_p.h"
#include "listdatabasesrequest.h"

namespace QtAws {
namespace RedshiftData {

class ListDatabasesRequest;

class ListDatabasesRequestPrivate : public RedshiftDataRequestPrivate {

public:
    ListDatabasesRequestPrivate(const RedshiftDataRequest::Action action,
                                   ListDatabasesRequest * const q);
    ListDatabasesRequestPrivate(const ListDatabasesRequestPrivate &other,
                                   ListDatabasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatabasesRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
