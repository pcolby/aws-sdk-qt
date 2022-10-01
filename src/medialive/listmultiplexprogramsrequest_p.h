// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPLEXPROGRAMSREQUEST_P_H
#define QTAWS_LISTMULTIPLEXPROGRAMSREQUEST_P_H

#include "medialiverequest_p.h"
#include "listmultiplexprogramsrequest.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexProgramsRequest;

class ListMultiplexProgramsRequestPrivate : public MediaLiveRequestPrivate {

public:
    ListMultiplexProgramsRequestPrivate(const MediaLiveRequest::Action action,
                                   ListMultiplexProgramsRequest * const q);
    ListMultiplexProgramsRequestPrivate(const ListMultiplexProgramsRequestPrivate &other,
                                   ListMultiplexProgramsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMultiplexProgramsRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
