// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONPUBLICIPV4POOLCIDRRESPONSE_P_H
#define QTAWS_DEPROVISIONPUBLICIPV4POOLCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionPublicIpv4PoolCidrResponse;

class DeprovisionPublicIpv4PoolCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeprovisionPublicIpv4PoolCidrResponsePrivate(DeprovisionPublicIpv4PoolCidrResponse * const q);

    void parseDeprovisionPublicIpv4PoolCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprovisionPublicIpv4PoolCidrResponse)
    Q_DISABLE_COPY(DeprovisionPublicIpv4PoolCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
