// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNIPV6ADDRESSESREQUEST_H
#define QTAWS_ASSIGNIPV6ADDRESSESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssignIpv6AddressesRequestPrivate;

class QTAWSEC2_EXPORT AssignIpv6AddressesRequest : public Ec2Request {

public:
    AssignIpv6AddressesRequest(const AssignIpv6AddressesRequest &other);
    AssignIpv6AddressesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignIpv6AddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
