// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSOFRESOURCEREQUEST_P_H
#define QTAWS_LISTTAGSOFRESOURCEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "listtagsofresourcerequest.h"

namespace QtAws {
namespace DynamoDb {

class ListTagsOfResourceRequest;

class ListTagsOfResourceRequestPrivate : public DynamoDbRequestPrivate {

public:
    ListTagsOfResourceRequestPrivate(const DynamoDbRequest::Action action,
                                   ListTagsOfResourceRequest * const q);
    ListTagsOfResourceRequestPrivate(const ListTagsOfResourceRequestPrivate &other,
                                   ListTagsOfResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsOfResourceRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
