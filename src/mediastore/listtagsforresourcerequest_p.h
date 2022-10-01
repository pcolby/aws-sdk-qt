// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_P_H

#include "mediastorerequest_p.h"
#include "listtagsforresourcerequest.h"

namespace QtAws {
namespace MediaStore {

class ListTagsForResourceRequest;

class ListTagsForResourceRequestPrivate : public MediaStoreRequestPrivate {

public:
    ListTagsForResourceRequestPrivate(const MediaStoreRequest::Action action,
                                   ListTagsForResourceRequest * const q);
    ListTagsForResourceRequestPrivate(const ListTagsForResourceRequestPrivate &other,
                                   ListTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourceRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
