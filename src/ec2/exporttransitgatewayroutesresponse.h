// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTRANSITGATEWAYROUTESRESPONSE_H
#define QTAWS_EXPORTTRANSITGATEWAYROUTESRESPONSE_H

#include "ec2response.h"
#include "exporttransitgatewayroutesrequest.h"

namespace QtAws {
namespace Ec2 {

class ExportTransitGatewayRoutesResponsePrivate;

class QTAWSEC2_EXPORT ExportTransitGatewayRoutesResponse : public Ec2Response {
    Q_OBJECT

public:
    ExportTransitGatewayRoutesResponse(const ExportTransitGatewayRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportTransitGatewayRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportTransitGatewayRoutesResponse)
    Q_DISABLE_COPY(ExportTransitGatewayRoutesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
