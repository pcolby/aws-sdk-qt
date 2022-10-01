// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGLOBALTABLESREQUEST_P_H
#define QTAWS_LISTGLOBALTABLESREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "listglobaltablesrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListGlobalTablesRequest;

class ListGlobalTablesRequestPrivate : public DynamoDbRequestPrivate {

public:
    ListGlobalTablesRequestPrivate(const DynamoDbRequest::Action action,
                                   ListGlobalTablesRequest * const q);
    ListGlobalTablesRequestPrivate(const ListGlobalTablesRequestPrivate &other,
                                   ListGlobalTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGlobalTablesRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
