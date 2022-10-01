// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPSREQUEST_P_H
#define QTAWS_LISTBACKUPSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "listbackupsrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListBackupsRequest;

class ListBackupsRequestPrivate : public DynamoDbRequestPrivate {

public:
    ListBackupsRequestPrivate(const DynamoDbRequest::Action action,
                                   ListBackupsRequest * const q);
    ListBackupsRequestPrivate(const ListBackupsRequestPrivate &other,
                                   ListBackupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackupsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
