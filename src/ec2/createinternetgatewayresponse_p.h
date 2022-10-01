// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTERNETGATEWAYRESPONSE_P_H
#define QTAWS_CREATEINTERNETGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateInternetGatewayResponse;

class CreateInternetGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateInternetGatewayResponsePrivate(CreateInternetGatewayResponse * const q);

    void parseCreateInternetGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInternetGatewayResponse)
    Q_DISABLE_COPY(CreateInternetGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
