// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCATTACHMENTRESPONSE_H
#define QTAWS_GETVPCATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "getvpcattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetVpcAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetVpcAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetVpcAttachmentResponse(const GetVpcAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVpcAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpcAttachmentResponse)
    Q_DISABLE_COPY(GetVpcAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
