// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTRANSITGATEWAYROUTESRESPONSE_P_H
#define QTAWS_SEARCHTRANSITGATEWAYROUTESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class SearchTransitGatewayRoutesResponse;

class SearchTransitGatewayRoutesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit SearchTransitGatewayRoutesResponsePrivate(SearchTransitGatewayRoutesResponse * const q);

    void parseSearchTransitGatewayRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchTransitGatewayRoutesResponse)
    Q_DISABLE_COPY(SearchTransitGatewayRoutesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
