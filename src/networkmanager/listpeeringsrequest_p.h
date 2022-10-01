// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPEERINGSREQUEST_P_H
#define QTAWS_LISTPEERINGSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "listpeeringsrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListPeeringsRequest;

class ListPeeringsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    ListPeeringsRequestPrivate(const NetworkManagerRequest::Action action,
                                   ListPeeringsRequest * const q);
    ListPeeringsRequestPrivate(const ListPeeringsRequestPrivate &other,
                                   ListPeeringsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPeeringsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
