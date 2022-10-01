// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITETOSITEVPNATTACHMENTRESPONSE_H
#define QTAWS_GETSITETOSITEVPNATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "getsitetositevpnattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetSiteToSiteVpnAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetSiteToSiteVpnAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetSiteToSiteVpnAttachmentResponse(const GetSiteToSiteVpnAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSiteToSiteVpnAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSiteToSiteVpnAttachmentResponse)
    Q_DISABLE_COPY(GetSiteToSiteVpnAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
