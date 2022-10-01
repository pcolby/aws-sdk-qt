// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listtagsforresourcerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListTagsForResourceRequest;

class ListTagsForResourceRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListTagsForResourceRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListTagsForResourceRequest * const q);
    ListTagsForResourceRequestPrivate(const ListTagsForResourceRequestPrivate &other,
                                   ListTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourceRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
