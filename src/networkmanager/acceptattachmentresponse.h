// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTATTACHMENTRESPONSE_H
#define QTAWS_ACCEPTATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "acceptattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class AcceptAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT AcceptAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    AcceptAttachmentResponse(const AcceptAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptAttachmentResponse)
    Q_DISABLE_COPY(AcceptAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
