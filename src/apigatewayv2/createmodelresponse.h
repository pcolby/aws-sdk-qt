// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELRESPONSE_H
#define QTAWS_CREATEMODELRESPONSE_H

#include "apigatewayv2response.h"
#include "createmodelrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateModelResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateModelResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateModelResponse(const CreateModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelResponse)
    Q_DISABLE_COPY(CreateModelResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
