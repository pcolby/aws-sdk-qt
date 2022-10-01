// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITETOSITEVPNATTACHMENTRESPONSE_H
#define QTAWS_CREATESITETOSITEVPNATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "createsitetositevpnattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateSiteToSiteVpnAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateSiteToSiteVpnAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateSiteToSiteVpnAttachmentResponse(const CreateSiteToSiteVpnAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSiteToSiteVpnAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSiteToSiteVpnAttachmentResponse)
    Q_DISABLE_COPY(CreateSiteToSiteVpnAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
