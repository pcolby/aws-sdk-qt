// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEGRESSONLYINTERNETGATEWAYRESPONSE_P_H
#define QTAWS_CREATEEGRESSONLYINTERNETGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateEgressOnlyInternetGatewayResponse;

class CreateEgressOnlyInternetGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateEgressOnlyInternetGatewayResponsePrivate(CreateEgressOnlyInternetGatewayResponse * const q);

    void parseCreateEgressOnlyInternetGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEgressOnlyInternetGatewayResponse)
    Q_DISABLE_COPY(CreateEgressOnlyInternetGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
