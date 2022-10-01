// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAVIEWSREQUEST_P_H
#define QTAWS_LISTDATAVIEWSREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "listdataviewsrequest.h"

namespace QtAws {
namespace FinspaceData {

class ListDataViewsRequest;

class ListDataViewsRequestPrivate : public FinspaceDataRequestPrivate {

public:
    ListDataViewsRequestPrivate(const FinspaceDataRequest::Action action,
                                   ListDataViewsRequest * const q);
    ListDataViewsRequestPrivate(const ListDataViewsRequestPrivate &other,
                                   ListDataViewsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataViewsRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
