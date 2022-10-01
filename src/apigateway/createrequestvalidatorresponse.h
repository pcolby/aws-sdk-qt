// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREQUESTVALIDATORRESPONSE_H
#define QTAWS_CREATEREQUESTVALIDATORRESPONSE_H

#include "apigatewayresponse.h"
#include "createrequestvalidatorrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateRequestValidatorResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateRequestValidatorResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateRequestValidatorResponse(const CreateRequestValidatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRequestValidatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRequestValidatorResponse)
    Q_DISABLE_COPY(CreateRequestValidatorResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
