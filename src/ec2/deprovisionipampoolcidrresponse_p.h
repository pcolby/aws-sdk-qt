// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONIPAMPOOLCIDRRESPONSE_P_H
#define QTAWS_DEPROVISIONIPAMPOOLCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionIpamPoolCidrResponse;

class DeprovisionIpamPoolCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeprovisionIpamPoolCidrResponsePrivate(DeprovisionIpamPoolCidrResponse * const q);

    void parseDeprovisionIpamPoolCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprovisionIpamPoolCidrResponse)
    Q_DISABLE_COPY(DeprovisionIpamPoolCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
