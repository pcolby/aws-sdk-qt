// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITESREQUEST_P_H
#define QTAWS_GETSITESREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getsitesrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetSitesRequest;

class GetSitesRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetSitesRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetSitesRequest * const q);
    GetSitesRequestPrivate(const GetSitesRequestPrivate &other,
                                   GetSitesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSitesRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
