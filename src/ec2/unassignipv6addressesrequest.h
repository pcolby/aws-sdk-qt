// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNIPV6ADDRESSESREQUEST_H
#define QTAWS_UNASSIGNIPV6ADDRESSESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class UnassignIpv6AddressesRequestPrivate;

class QTAWSEC2_EXPORT UnassignIpv6AddressesRequest : public Ec2Request {

public:
    UnassignIpv6AddressesRequest(const UnassignIpv6AddressesRequest &other);
    UnassignIpv6AddressesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnassignIpv6AddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
