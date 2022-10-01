// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPrefixListReferenceResponse;

class DeleteTransitGatewayPrefixListReferenceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayPrefixListReferenceResponsePrivate(DeleteTransitGatewayPrefixListReferenceResponse * const q);

    void parseDeleteTransitGatewayPrefixListReferenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayPrefixListReferenceResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayPrefixListReferenceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
