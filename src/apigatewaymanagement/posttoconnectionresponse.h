// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTTOCONNECTIONRESPONSE_H
#define QTAWS_POSTTOCONNECTIONRESPONSE_H

#include "apigatewaymanagementresponse.h"
#include "posttoconnectionrequest.h"

namespace QtAws {
namespace ApiGatewayManagement {

class PostToConnectionResponsePrivate;

class QTAWSAPIGATEWAYMANAGEMENT_EXPORT PostToConnectionResponse : public ApiGatewayManagementResponse {
    Q_OBJECT

public:
    PostToConnectionResponse(const PostToConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostToConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostToConnectionResponse)
    Q_DISABLE_COPY(PostToConnectionResponse)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
