// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYATTACHMENTPROPAGATIONSREQUEST_H
#define QTAWS_GETTRANSITGATEWAYATTACHMENTPROPAGATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayAttachmentPropagationsRequestPrivate;

class QTAWSEC2_EXPORT GetTransitGatewayAttachmentPropagationsRequest : public Ec2Request {

public:
    GetTransitGatewayAttachmentPropagationsRequest(const GetTransitGatewayAttachmentPropagationsRequest &other);
    GetTransitGatewayAttachmentPropagationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayAttachmentPropagationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
