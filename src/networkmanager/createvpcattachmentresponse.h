// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCATTACHMENTRESPONSE_H
#define QTAWS_CREATEVPCATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "createvpcattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateVpcAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateVpcAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateVpcAttachmentResponse(const CreateVpcAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcAttachmentResponse)
    Q_DISABLE_COPY(CreateVpcAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
