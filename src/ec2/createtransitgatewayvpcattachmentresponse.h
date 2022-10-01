// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYVPCATTACHMENTRESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYVPCATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "createtransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayVpcAttachmentResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayVpcAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayVpcAttachmentResponse(const CreateTransitGatewayVpcAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayVpcAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(CreateTransitGatewayVpcAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
