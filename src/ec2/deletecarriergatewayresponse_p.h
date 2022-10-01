// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECARRIERGATEWAYRESPONSE_P_H
#define QTAWS_DELETECARRIERGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteCarrierGatewayResponse;

class DeleteCarrierGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteCarrierGatewayResponsePrivate(DeleteCarrierGatewayResponse * const q);

    void parseDeleteCarrierGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCarrierGatewayResponse)
    Q_DISABLE_COPY(DeleteCarrierGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
