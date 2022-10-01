// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listtagsforresourcerequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListTagsForResourceRequest;

class ListTagsForResourceRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListTagsForResourceRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListTagsForResourceRequest * const q);
    ListTagsForResourceRequestPrivate(const ListTagsForResourceRequestPrivate &other,
                                   ListTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourceRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
