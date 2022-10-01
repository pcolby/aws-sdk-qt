// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPREFIXLISTREFERENCESRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYPREFIXLISTREFERENCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPrefixListReferencesResponse;

class GetTransitGatewayPrefixListReferencesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetTransitGatewayPrefixListReferencesResponsePrivate(GetTransitGatewayPrefixListReferencesResponse * const q);

    void parseGetTransitGatewayPrefixListReferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayPrefixListReferencesResponse)
    Q_DISABLE_COPY(GetTransitGatewayPrefixListReferencesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
