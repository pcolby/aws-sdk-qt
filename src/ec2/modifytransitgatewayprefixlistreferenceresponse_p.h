// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_P_H
#define QTAWS_MODIFYTRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayPrefixListReferenceResponse;

class ModifyTransitGatewayPrefixListReferenceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyTransitGatewayPrefixListReferenceResponsePrivate(ModifyTransitGatewayPrefixListReferenceResponse * const q);

    void parseModifyTransitGatewayPrefixListReferenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTransitGatewayPrefixListReferenceResponse)
    Q_DISABLE_COPY(ModifyTransitGatewayPrefixListReferenceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
