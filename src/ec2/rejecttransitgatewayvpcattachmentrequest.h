// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYVPCATTACHMENTREQUEST_H
#define QTAWS_REJECTTRANSITGATEWAYVPCATTACHMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayVpcAttachmentRequestPrivate;

class QTAWSEC2_EXPORT RejectTransitGatewayVpcAttachmentRequest : public Ec2Request {

public:
    RejectTransitGatewayVpcAttachmentRequest(const RejectTransitGatewayVpcAttachmentRequest &other);
    RejectTransitGatewayVpcAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectTransitGatewayVpcAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
