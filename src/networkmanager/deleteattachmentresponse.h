// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTACHMENTRESPONSE_H
#define QTAWS_DELETEATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "deleteattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DeleteAttachmentResponse(const DeleteAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttachmentResponse)
    Q_DISABLE_COPY(DeleteAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
