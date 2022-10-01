// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELRESPONSE_H
#define QTAWS_GETMODELRESPONSE_H

#include "apigatewayv2response.h"
#include "getmodelrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetModelResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetModelResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetModelResponse(const GetModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelResponse)
    Q_DISABLE_COPY(GetModelResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
