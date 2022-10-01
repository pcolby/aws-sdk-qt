// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINNAMERESPONSE_P_H
#define QTAWS_CREATEDOMAINNAMERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateDomainNameResponse;

class CreateDomainNameResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateDomainNameResponsePrivate(CreateDomainNameResponse * const q);

    void parseCreateDomainNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDomainNameResponse)
    Q_DISABLE_COPY(CreateDomainNameResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
