// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMERESPONSE_P_H
#define QTAWS_UPDATEDOMAINNAMERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDomainNameResponse;

class UpdateDomainNameResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateDomainNameResponsePrivate(UpdateDomainNameResponse * const q);

    void parseUpdateDomainNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainNameResponse)
    Q_DISABLE_COPY(UpdateDomainNameResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
