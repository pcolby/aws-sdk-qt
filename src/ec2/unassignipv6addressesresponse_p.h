// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNIPV6ADDRESSESRESPONSE_P_H
#define QTAWS_UNASSIGNIPV6ADDRESSESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class UnassignIpv6AddressesResponse;

class UnassignIpv6AddressesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit UnassignIpv6AddressesResponsePrivate(UnassignIpv6AddressesResponse * const q);

    void parseUnassignIpv6AddressesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnassignIpv6AddressesResponse)
    Q_DISABLE_COPY(UnassignIpv6AddressesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
