// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSE_P_H
#define QTAWS_GETGATEWAYRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetGatewayResponse;

class GetGatewayResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetGatewayResponsePrivate(GetGatewayResponse * const q);

    void parseGetGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGatewayResponse)
    Q_DISABLE_COPY(GetGatewayResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
