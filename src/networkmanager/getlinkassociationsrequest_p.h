// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKASSOCIATIONSREQUEST_P_H
#define QTAWS_GETLINKASSOCIATIONSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getlinkassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetLinkAssociationsRequest;

class GetLinkAssociationsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetLinkAssociationsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetLinkAssociationsRequest * const q);
    GetLinkAssociationsRequestPrivate(const GetLinkAssociationsRequestPrivate &other,
                                   GetLinkAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLinkAssociationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
