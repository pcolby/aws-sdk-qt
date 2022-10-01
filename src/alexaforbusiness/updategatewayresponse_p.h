// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYRESPONSE_P_H
#define QTAWS_UPDATEGATEWAYRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateGatewayResponse;

class UpdateGatewayResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateGatewayResponsePrivate(UpdateGatewayResponse * const q);

    void parseUpdateGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayResponse)
    Q_DISABLE_COPY(UpdateGatewayResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
