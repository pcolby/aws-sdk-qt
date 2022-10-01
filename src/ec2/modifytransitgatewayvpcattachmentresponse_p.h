// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H
#define QTAWS_MODIFYTRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayVpcAttachmentResponse;

class ModifyTransitGatewayVpcAttachmentResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyTransitGatewayVpcAttachmentResponsePrivate(ModifyTransitGatewayVpcAttachmentResponse * const q);

    void parseModifyTransitGatewayVpcAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(ModifyTransitGatewayVpcAttachmentResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
