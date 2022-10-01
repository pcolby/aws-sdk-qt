// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H

#include "wisdomrequest_p.h"
#include "listtagsforresourcerequest.h"

namespace QtAws {
namespace Wisdom {

class ListTagsForResourceRequest;

class ListTagsForResourceRequestPrivate : public WisdomRequestPrivate {

public:
    ListTagsForResourceRequestPrivate(const WisdomRequest::Action action,
                                   ListTagsForResourceRequest * const q);
    ListTagsForResourceRequestPrivate(const ListTagsForResourceRequestPrivate &other,
                                   ListTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourceRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
