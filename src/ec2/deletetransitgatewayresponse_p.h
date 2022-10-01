// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYRESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayResponse;

class DeleteTransitGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayResponsePrivate(DeleteTransitGatewayResponse * const q);

    void parseDeleteTransitGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
