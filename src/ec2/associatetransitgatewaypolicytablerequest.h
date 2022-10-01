// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYPOLICYTABLEREQUEST_H
#define QTAWS_ASSOCIATETRANSITGATEWAYPOLICYTABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayPolicyTableRequestPrivate;

class QTAWSEC2_EXPORT AssociateTransitGatewayPolicyTableRequest : public Ec2Request {

public:
    AssociateTransitGatewayPolicyTableRequest(const AssociateTransitGatewayPolicyTableRequest &other);
    AssociateTransitGatewayPolicyTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTransitGatewayPolicyTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
