// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "listtagsforresourcerequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class ListTagsForResourceRequest;

class ListTagsForResourceRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    ListTagsForResourceRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   ListTagsForResourceRequest * const q);
    ListTagsForResourceRequestPrivate(const ListTagsForResourceRequestPrivate &other,
                                   ListTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourceRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
