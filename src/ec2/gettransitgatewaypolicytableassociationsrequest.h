// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPOLICYTABLEASSOCIATIONSREQUEST_H
#define QTAWS_GETTRANSITGATEWAYPOLICYTABLEASSOCIATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPolicyTableAssociationsRequestPrivate;

class QTAWSEC2_EXPORT GetTransitGatewayPolicyTableAssociationsRequest : public Ec2Request {

public:
    GetTransitGatewayPolicyTableAssociationsRequest(const GetTransitGatewayPolicyTableAssociationsRequest &other);
    GetTransitGatewayPolicyTableAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayPolicyTableAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
