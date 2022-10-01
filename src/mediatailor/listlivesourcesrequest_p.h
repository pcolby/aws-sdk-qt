// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLIVESOURCESREQUEST_P_H
#define QTAWS_LISTLIVESOURCESREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "listlivesourcesrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListLiveSourcesRequest;

class ListLiveSourcesRequestPrivate : public MediaTailorRequestPrivate {

public:
    ListLiveSourcesRequestPrivate(const MediaTailorRequest::Action action,
                                   ListLiveSourcesRequest * const q);
    ListLiveSourcesRequestPrivate(const ListLiveSourcesRequestPrivate &other,
                                   ListLiveSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLiveSourcesRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
