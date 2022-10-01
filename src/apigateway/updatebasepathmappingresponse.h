// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBASEPATHMAPPINGRESPONSE_H
#define QTAWS_UPDATEBASEPATHMAPPINGRESPONSE_H

#include "apigatewayresponse.h"
#include "updatebasepathmappingrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateBasePathMappingResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateBasePathMappingResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateBasePathMappingResponse(const UpdateBasePathMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBasePathMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBasePathMappingResponse)
    Q_DISABLE_COPY(UpdateBasePathMappingResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
