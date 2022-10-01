// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROXYSESSIONSREQUEST_P_H
#define QTAWS_LISTPROXYSESSIONSREQUEST_P_H

#include "chimerequest_p.h"
#include "listproxysessionsrequest.h"

namespace QtAws {
namespace Chime {

class ListProxySessionsRequest;

class ListProxySessionsRequestPrivate : public ChimeRequestPrivate {

public:
    ListProxySessionsRequestPrivate(const ChimeRequest::Action action,
                                   ListProxySessionsRequest * const q);
    ListProxySessionsRequestPrivate(const ListProxySessionsRequestPrivate &other,
                                   ListProxySessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProxySessionsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
