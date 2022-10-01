// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECARRIERGATEWAYRESPONSE_P_H
#define QTAWS_CREATECARRIERGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateCarrierGatewayResponse;

class CreateCarrierGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateCarrierGatewayResponsePrivate(CreateCarrierGatewayResponse * const q);

    void parseCreateCarrierGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCarrierGatewayResponse)
    Q_DISABLE_COPY(CreateCarrierGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
