// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPEERINGRESPONSE_H
#define QTAWS_DELETEPEERINGRESPONSE_H

#include "networkmanagerresponse.h"
#include "deletepeeringrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeletePeeringResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DeletePeeringResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DeletePeeringResponse(const DeletePeeringRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePeeringRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePeeringResponse)
    Q_DISABLE_COPY(DeletePeeringResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
