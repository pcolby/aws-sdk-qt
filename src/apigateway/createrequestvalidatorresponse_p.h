// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREQUESTVALIDATORRESPONSE_P_H
#define QTAWS_CREATEREQUESTVALIDATORRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateRequestValidatorResponse;

class CreateRequestValidatorResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateRequestValidatorResponsePrivate(CreateRequestValidatorResponse * const q);

    void parseCreateRequestValidatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRequestValidatorResponse)
    Q_DISABLE_COPY(CreateRequestValidatorResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
