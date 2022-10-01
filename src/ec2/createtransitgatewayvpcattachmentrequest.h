// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYVPCATTACHMENTREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYVPCATTACHMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayVpcAttachmentRequestPrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayVpcAttachmentRequest : public Ec2Request {

public:
    CreateTransitGatewayVpcAttachmentRequest(const CreateTransitGatewayVpcAttachmentRequest &other);
    CreateTransitGatewayVpcAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayVpcAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
