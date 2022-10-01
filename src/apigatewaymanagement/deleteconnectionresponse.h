// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONRESPONSE_H
#define QTAWS_DELETECONNECTIONRESPONSE_H

#include "apigatewaymanagementresponse.h"
#include "deleteconnectionrequest.h"

namespace QtAws {
namespace ApiGatewayManagement {

class DeleteConnectionResponsePrivate;

class QTAWSAPIGATEWAYMANAGEMENT_EXPORT DeleteConnectionResponse : public ApiGatewayManagementResponse {
    Q_OBJECT

public:
    DeleteConnectionResponse(const DeleteConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectionResponse)
    Q_DISABLE_COPY(DeleteConnectionResponse)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
