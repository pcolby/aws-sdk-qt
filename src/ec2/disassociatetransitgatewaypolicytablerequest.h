// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYPOLICYTABLEREQUEST_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYPOLICYTABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayPolicyTableRequestPrivate;

class QTAWSEC2_EXPORT DisassociateTransitGatewayPolicyTableRequest : public Ec2Request {

public:
    DisassociateTransitGatewayPolicyTableRequest(const DisassociateTransitGatewayPolicyTableRequest &other);
    DisassociateTransitGatewayPolicyTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTransitGatewayPolicyTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
