// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTATTACHMENTRESPONSE_H
#define QTAWS_CREATECONNECTATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "createconnectattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateConnectAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateConnectAttachmentResponse(const CreateConnectAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConnectAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectAttachmentResponse)
    Q_DISABLE_COPY(CreateConnectAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
