// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYATTACHMENTPROPAGATIONSRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYATTACHMENTPROPAGATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayAttachmentPropagationsResponse;

class GetTransitGatewayAttachmentPropagationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetTransitGatewayAttachmentPropagationsResponsePrivate(GetTransitGatewayAttachmentPropagationsResponse * const q);

    void parseGetTransitGatewayAttachmentPropagationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayAttachmentPropagationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayAttachmentPropagationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
