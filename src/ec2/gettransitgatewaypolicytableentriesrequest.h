// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPOLICYTABLEENTRIESREQUEST_H
#define QTAWS_GETTRANSITGATEWAYPOLICYTABLEENTRIESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPolicyTableEntriesRequestPrivate;

class QTAWSEC2_EXPORT GetTransitGatewayPolicyTableEntriesRequest : public Ec2Request {

public:
    GetTransitGatewayPolicyTableEntriesRequest(const GetTransitGatewayPolicyTableEntriesRequest &other);
    GetTransitGatewayPolicyTableEntriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayPolicyTableEntriesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
