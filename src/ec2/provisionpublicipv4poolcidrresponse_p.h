// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPUBLICIPV4POOLCIDRRESPONSE_P_H
#define QTAWS_PROVISIONPUBLICIPV4POOLCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ProvisionPublicIpv4PoolCidrResponse;

class ProvisionPublicIpv4PoolCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ProvisionPublicIpv4PoolCidrResponsePrivate(ProvisionPublicIpv4PoolCidrResponse * const q);

    void parseProvisionPublicIpv4PoolCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProvisionPublicIpv4PoolCidrResponse)
    Q_DISABLE_COPY(ProvisionPublicIpv4PoolCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
