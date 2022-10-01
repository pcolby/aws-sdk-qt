// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKSREQUEST_P_H
#define QTAWS_GETLINKSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getlinksrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetLinksRequest;

class GetLinksRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetLinksRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetLinksRequest * const q);
    GetLinksRequestPrivate(const GetLinksRequestPrivate &other,
                                   GetLinksRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLinksRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
