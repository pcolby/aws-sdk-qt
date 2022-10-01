// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITLEMENTSREQUEST_P_H
#define QTAWS_LISTENTITLEMENTSREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "listentitlementsrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListEntitlementsRequest;

class ListEntitlementsRequestPrivate : public MediaConnectRequestPrivate {

public:
    ListEntitlementsRequestPrivate(const MediaConnectRequest::Action action,
                                   ListEntitlementsRequest * const q);
    ListEntitlementsRequestPrivate(const ListEntitlementsRequestPrivate &other,
                                   ListEntitlementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntitlementsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
