// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNIPV6ADDRESSESRESPONSE_P_H
#define QTAWS_ASSIGNIPV6ADDRESSESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssignIpv6AddressesResponse;

class AssignIpv6AddressesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssignIpv6AddressesResponsePrivate(AssignIpv6AddressesResponse * const q);

    void parseAssignIpv6AddressesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssignIpv6AddressesResponse)
    Q_DISABLE_COPY(AssignIpv6AddressesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
