// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTVALIDATORSRESPONSE_H
#define QTAWS_GETREQUESTVALIDATORSRESPONSE_H

#include "apigatewayresponse.h"
#include "getrequestvalidatorsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRequestValidatorsResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetRequestValidatorsResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetRequestValidatorsResponse(const GetRequestValidatorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRequestValidatorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRequestValidatorsResponse)
    Q_DISABLE_COPY(GetRequestValidatorsResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
