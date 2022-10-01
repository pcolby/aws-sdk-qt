// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYVPCATTACHMENTRESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYVPCATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayVpcAttachmentResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayVpcAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayVpcAttachmentResponse(const DeleteTransitGatewayVpcAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayVpcAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayVpcAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
