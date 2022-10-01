// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTITEMSREQUEST_P_H
#define QTAWS_LISTITEMSREQUEST_P_H

#include "mediastoredatarequest_p.h"
#include "listitemsrequest.h"

namespace QtAws {
namespace MediaStoreData {

class ListItemsRequest;

class ListItemsRequestPrivate : public MediaStoreDataRequestPrivate {

public:
    ListItemsRequestPrivate(const MediaStoreDataRequest::Action action,
                                   ListItemsRequest * const q);
    ListItemsRequestPrivate(const ListItemsRequestPrivate &other,
                                   ListItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListItemsRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
