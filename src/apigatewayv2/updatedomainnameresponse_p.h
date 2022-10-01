// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMERESPONSE_P_H
#define QTAWS_UPDATEDOMAINNAMERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateDomainNameResponse;

class UpdateDomainNameResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateDomainNameResponsePrivate(UpdateDomainNameResponse * const q);

    void parseUpdateDomainNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainNameResponse)
    Q_DISABLE_COPY(UpdateDomainNameResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
