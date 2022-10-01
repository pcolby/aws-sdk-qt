// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITETOSITEVPNATTACHMENTRESPONSE_P_H
#define QTAWS_GETSITETOSITEVPNATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetSiteToSiteVpnAttachmentResponse;

class GetSiteToSiteVpnAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetSiteToSiteVpnAttachmentResponsePrivate(GetSiteToSiteVpnAttachmentResponse * const q);

    void parseGetSiteToSiteVpnAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSiteToSiteVpnAttachmentResponse)
    Q_DISABLE_COPY(GetSiteToSiteVpnAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
