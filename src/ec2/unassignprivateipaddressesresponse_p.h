// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNPRIVATEIPADDRESSESRESPONSE_P_H
#define QTAWS_UNASSIGNPRIVATEIPADDRESSESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class UnassignPrivateIpAddressesResponse;

class UnassignPrivateIpAddressesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit UnassignPrivateIpAddressesResponsePrivate(UnassignPrivateIpAddressesResponse * const q);

    void parseUnassignPrivateIpAddressesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnassignPrivateIpAddressesResponse)
    Q_DISABLE_COPY(UnassignPrivateIpAddressesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
