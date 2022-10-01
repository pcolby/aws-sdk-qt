// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYVPCATTACHMENTRESPONSE_H
#define QTAWS_REJECTTRANSITGATEWAYVPCATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "rejecttransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayVpcAttachmentResponsePrivate;

class QTAWSEC2_EXPORT RejectTransitGatewayVpcAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    RejectTransitGatewayVpcAttachmentResponse(const RejectTransitGatewayVpcAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectTransitGatewayVpcAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(RejectTransitGatewayVpcAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
