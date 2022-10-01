// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYVPCATTACHMENTRESPONSE_H
#define QTAWS_ACCEPTTRANSITGATEWAYVPCATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "accepttransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayVpcAttachmentResponsePrivate;

class QTAWSEC2_EXPORT AcceptTransitGatewayVpcAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    AcceptTransitGatewayVpcAttachmentResponse(const AcceptTransitGatewayVpcAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptTransitGatewayVpcAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(AcceptTransitGatewayVpcAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
