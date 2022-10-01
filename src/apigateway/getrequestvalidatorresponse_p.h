// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTVALIDATORRESPONSE_P_H
#define QTAWS_GETREQUESTVALIDATORRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetRequestValidatorResponse;

class GetRequestValidatorResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetRequestValidatorResponsePrivate(GetRequestValidatorResponse * const q);

    void parseGetRequestValidatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRequestValidatorResponse)
    Q_DISABLE_COPY(GetRequestValidatorResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
