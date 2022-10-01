// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEITEMREQUEST_P_H
#define QTAWS_UPDATEITEMREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "updateitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateItemRequest;

class UpdateItemRequestPrivate : public DynamoDbRequestPrivate {

public:
    UpdateItemRequestPrivate(const DynamoDbRequest::Action action,
                                   UpdateItemRequest * const q);
    UpdateItemRequestPrivate(const UpdateItemRequestPrivate &other,
                                   UpdateItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
