// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYVPCATTACHMENTREQUEST_H
#define QTAWS_DELETETRANSITGATEWAYVPCATTACHMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayVpcAttachmentRequestPrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayVpcAttachmentRequest : public Ec2Request {

public:
    DeleteTransitGatewayVpcAttachmentRequest(const DeleteTransitGatewayVpcAttachmentRequest &other);
    DeleteTransitGatewayVpcAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayVpcAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
