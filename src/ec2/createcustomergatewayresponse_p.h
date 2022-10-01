// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMERGATEWAYRESPONSE_P_H
#define QTAWS_CREATECUSTOMERGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateCustomerGatewayResponse;

class CreateCustomerGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateCustomerGatewayResponsePrivate(CreateCustomerGatewayResponse * const q);

    void parseCreateCustomerGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomerGatewayResponse)
    Q_DISABLE_COPY(CreateCustomerGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
