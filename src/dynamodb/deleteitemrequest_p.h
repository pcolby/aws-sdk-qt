// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEITEMREQUEST_P_H
#define QTAWS_DELETEITEMREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "deleteitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class DeleteItemRequest;

class DeleteItemRequestPrivate : public DynamoDbRequestPrivate {

public:
    DeleteItemRequestPrivate(const DynamoDbRequest::Action action,
                                   DeleteItemRequest * const q);
    DeleteItemRequestPrivate(const DeleteItemRequestPrivate &other,
                                   DeleteItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
