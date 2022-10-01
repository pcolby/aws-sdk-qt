// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPEERINGATTACHMENTRESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYPEERINGATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewaypeeringattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPeeringAttachmentResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayPeeringAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayPeeringAttachmentResponse(const DeleteTransitGatewayPeeringAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayPeeringAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayPeeringAttachmentResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayPeeringAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
