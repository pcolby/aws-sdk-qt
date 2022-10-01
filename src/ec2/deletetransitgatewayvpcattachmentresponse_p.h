// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayVpcAttachmentResponse;

class DeleteTransitGatewayVpcAttachmentResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayVpcAttachmentResponsePrivate(DeleteTransitGatewayVpcAttachmentResponse * const q);

    void parseDeleteTransitGatewayVpcAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayVpcAttachmentResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
