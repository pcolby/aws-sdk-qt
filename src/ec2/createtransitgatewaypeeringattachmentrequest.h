// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPEERINGATTACHMENTREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYPEERINGATTACHMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPeeringAttachmentRequestPrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayPeeringAttachmentRequest : public Ec2Request {

public:
    CreateTransitGatewayPeeringAttachmentRequest(const CreateTransitGatewayPeeringAttachmentRequest &other);
    CreateTransitGatewayPeeringAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayPeeringAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
