// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayResponse;

class CreateTransitGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayResponsePrivate(CreateTransitGatewayResponse * const q);

    void parseCreateTransitGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayResponse)
    Q_DISABLE_COPY(CreateTransitGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
