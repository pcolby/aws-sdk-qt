// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATABASESREQUEST_P_H
#define QTAWS_LISTDATABASESREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "listdatabasesrequest.h"

namespace QtAws {
namespace TimestreamWrite {

class ListDatabasesRequest;

class ListDatabasesRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    ListDatabasesRequestPrivate(const TimestreamWriteRequest::Action action,
                                   ListDatabasesRequest * const q);
    ListDatabasesRequestPrivate(const ListDatabasesRequestPrivate &other,
                                   ListDatabasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatabasesRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
