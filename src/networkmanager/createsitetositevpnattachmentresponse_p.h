// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITETOSITEVPNATTACHMENTRESPONSE_P_H
#define QTAWS_CREATESITETOSITEVPNATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateSiteToSiteVpnAttachmentResponse;

class CreateSiteToSiteVpnAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateSiteToSiteVpnAttachmentResponsePrivate(CreateSiteToSiteVpnAttachmentResponse * const q);

    void parseCreateSiteToSiteVpnAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSiteToSiteVpnAttachmentResponse)
    Q_DISABLE_COPY(CreateSiteToSiteVpnAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
