// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBASEPATHMAPPINGRESPONSE_H
#define QTAWS_DELETEBASEPATHMAPPINGRESPONSE_H

#include "apigatewayresponse.h"
#include "deletebasepathmappingrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteBasePathMappingResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteBasePathMappingResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteBasePathMappingResponse(const DeleteBasePathMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBasePathMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBasePathMappingResponse)
    Q_DISABLE_COPY(DeleteBasePathMappingResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
