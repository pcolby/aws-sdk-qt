// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELSRESPONSE_H
#define QTAWS_GETMODELSRESPONSE_H

#include "apigatewayresponse.h"
#include "getmodelsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetModelsResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetModelsResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetModelsResponse(const GetModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelsResponse)
    Q_DISABLE_COPY(GetModelsResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
