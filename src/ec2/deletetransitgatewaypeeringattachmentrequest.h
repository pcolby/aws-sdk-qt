// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPEERINGATTACHMENTREQUEST_H
#define QTAWS_DELETETRANSITGATEWAYPEERINGATTACHMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPeeringAttachmentRequestPrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayPeeringAttachmentRequest : public Ec2Request {

public:
    DeleteTransitGatewayPeeringAttachmentRequest(const DeleteTransitGatewayPeeringAttachmentRequest &other);
    DeleteTransitGatewayPeeringAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayPeeringAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
