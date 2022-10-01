// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTATTACHMENTRESPONSE_H
#define QTAWS_GETCONNECTATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "getconnectattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetConnectAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetConnectAttachmentResponse(const GetConnectAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectAttachmentResponse)
    Q_DISABLE_COPY(GetConnectAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
