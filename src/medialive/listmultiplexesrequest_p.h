// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPLEXESREQUEST_P_H
#define QTAWS_LISTMULTIPLEXESREQUEST_P_H

#include "medialiverequest_p.h"
#include "listmultiplexesrequest.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexesRequest;

class ListMultiplexesRequestPrivate : public MediaLiveRequestPrivate {

public:
    ListMultiplexesRequestPrivate(const MediaLiveRequest::Action action,
                                   ListMultiplexesRequest * const q);
    ListMultiplexesRequestPrivate(const ListMultiplexesRequestPrivate &other,
                                   ListMultiplexesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMultiplexesRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
