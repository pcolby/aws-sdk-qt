// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYRESPONSE_H
#define QTAWS_DELETEGATEWAYRESPONSE_H

#include "storagegatewayresponse.h"
#include "deletegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteGatewayResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteGatewayResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteGatewayResponse(const DeleteGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayResponse)
    Q_DISABLE_COPY(DeleteGatewayResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
