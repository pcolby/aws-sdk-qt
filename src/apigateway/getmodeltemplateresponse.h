// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELTEMPLATERESPONSE_H
#define QTAWS_GETMODELTEMPLATERESPONSE_H

#include "apigatewayresponse.h"
#include "getmodeltemplaterequest.h"

namespace QtAws {
namespace ApiGateway {

class GetModelTemplateResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetModelTemplateResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetModelTemplateResponse(const GetModelTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetModelTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelTemplateResponse)
    Q_DISABLE_COPY(GetModelTemplateResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
