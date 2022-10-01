// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENATGATEWAYRESPONSE_P_H
#define QTAWS_CREATENATGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateNatGatewayResponse;

class CreateNatGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateNatGatewayResponsePrivate(CreateNatGatewayResponse * const q);

    void parseCreateNatGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNatGatewayResponse)
    Q_DISABLE_COPY(CreateNatGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
