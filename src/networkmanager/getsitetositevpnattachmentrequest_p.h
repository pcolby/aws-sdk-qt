// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITETOSITEVPNATTACHMENTREQUEST_P_H
#define QTAWS_GETSITETOSITEVPNATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getsitetositevpnattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetSiteToSiteVpnAttachmentRequest;

class GetSiteToSiteVpnAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetSiteToSiteVpnAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetSiteToSiteVpnAttachmentRequest * const q);
    GetSiteToSiteVpnAttachmentRequestPrivate(const GetSiteToSiteVpnAttachmentRequestPrivate &other,
                                   GetSiteToSiteVpnAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSiteToSiteVpnAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
