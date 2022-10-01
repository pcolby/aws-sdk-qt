// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITETOSITEVPNATTACHMENTREQUEST_P_H
#define QTAWS_CREATESITETOSITEVPNATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createsitetositevpnattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateSiteToSiteVpnAttachmentRequest;

class CreateSiteToSiteVpnAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateSiteToSiteVpnAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateSiteToSiteVpnAttachmentRequest * const q);
    CreateSiteToSiteVpnAttachmentRequestPrivate(const CreateSiteToSiteVpnAttachmentRequestPrivate &other,
                                   CreateSiteToSiteVpnAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSiteToSiteVpnAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
