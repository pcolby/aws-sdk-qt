// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETITEMREQUEST_P_H
#define QTAWS_GETITEMREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "getitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class GetItemRequest;

class GetItemRequestPrivate : public DynamoDbRequestPrivate {

public:
    GetItemRequestPrivate(const DynamoDbRequest::Action action,
                                   GetItemRequest * const q);
    GetItemRequestPrivate(const GetItemRequestPrivate &other,
                                   GetItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
