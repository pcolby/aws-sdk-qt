// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTRANSITGATEWAYROUTESRESPONSE_P_H
#define QTAWS_EXPORTTRANSITGATEWAYROUTESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ExportTransitGatewayRoutesResponse;

class ExportTransitGatewayRoutesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ExportTransitGatewayRoutesResponsePrivate(ExportTransitGatewayRoutesResponse * const q);

    void parseExportTransitGatewayRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportTransitGatewayRoutesResponse)
    Q_DISABLE_COPY(ExportTransitGatewayRoutesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
