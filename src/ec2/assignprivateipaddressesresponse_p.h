// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNPRIVATEIPADDRESSESRESPONSE_P_H
#define QTAWS_ASSIGNPRIVATEIPADDRESSESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssignPrivateIpAddressesResponse;

class AssignPrivateIpAddressesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssignPrivateIpAddressesResponsePrivate(AssignPrivateIpAddressesResponse * const q);

    void parseAssignPrivateIpAddressesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssignPrivateIpAddressesResponse)
    Q_DISABLE_COPY(AssignPrivateIpAddressesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
