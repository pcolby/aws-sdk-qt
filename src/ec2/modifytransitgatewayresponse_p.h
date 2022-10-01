// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYRESPONSE_P_H
#define QTAWS_MODIFYTRANSITGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayResponse;

class ModifyTransitGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyTransitGatewayResponsePrivate(ModifyTransitGatewayResponse * const q);

    void parseModifyTransitGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTransitGatewayResponse)
    Q_DISABLE_COPY(ModifyTransitGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
