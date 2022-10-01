// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPOLICYTABLEREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYPOLICYTABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPolicyTableRequestPrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayPolicyTableRequest : public Ec2Request {

public:
    CreateTransitGatewayPolicyTableRequest(const CreateTransitGatewayPolicyTableRequest &other);
    CreateTransitGatewayPolicyTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayPolicyTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
