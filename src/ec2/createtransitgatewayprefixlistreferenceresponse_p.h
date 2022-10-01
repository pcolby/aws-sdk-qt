// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPrefixListReferenceResponse;

class CreateTransitGatewayPrefixListReferenceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayPrefixListReferenceResponsePrivate(CreateTransitGatewayPrefixListReferenceResponse * const q);

    void parseCreateTransitGatewayPrefixListReferenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayPrefixListReferenceResponse)
    Q_DISABLE_COPY(CreateTransitGatewayPrefixListReferenceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
