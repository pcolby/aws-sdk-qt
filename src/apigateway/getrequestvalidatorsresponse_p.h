// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTVALIDATORSRESPONSE_P_H
#define QTAWS_GETREQUESTVALIDATORSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetRequestValidatorsResponse;

class GetRequestValidatorsResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetRequestValidatorsResponsePrivate(GetRequestValidatorsResponse * const q);

    void parseGetRequestValidatorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRequestValidatorsResponse)
    Q_DISABLE_COPY(GetRequestValidatorsResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
