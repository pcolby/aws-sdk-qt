// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVODSOURCESREQUEST_P_H
#define QTAWS_LISTVODSOURCESREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "listvodsourcesrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListVodSourcesRequest;

class ListVodSourcesRequestPrivate : public MediaTailorRequestPrivate {

public:
    ListVodSourcesRequestPrivate(const MediaTailorRequest::Action action,
                                   ListVodSourcesRequest * const q);
    ListVodSourcesRequestPrivate(const ListVodSourcesRequestPrivate &other,
                                   ListVodSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVodSourcesRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
