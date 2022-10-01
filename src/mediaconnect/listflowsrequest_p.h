// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWSREQUEST_P_H
#define QTAWS_LISTFLOWSREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "listflowsrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListFlowsRequest;

class ListFlowsRequestPrivate : public MediaConnectRequestPrivate {

public:
    ListFlowsRequestPrivate(const MediaConnectRequest::Action action,
                                   ListFlowsRequest * const q);
    ListFlowsRequestPrivate(const ListFlowsRequestPrivate &other,
                                   ListFlowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFlowsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
