// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDIPV6POOLCIDRSRESPONSE_P_H
#define QTAWS_GETASSOCIATEDIPV6POOLCIDRSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetAssociatedIpv6PoolCidrsResponse;

class GetAssociatedIpv6PoolCidrsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetAssociatedIpv6PoolCidrsResponsePrivate(GetAssociatedIpv6PoolCidrsResponse * const q);

    void parseGetAssociatedIpv6PoolCidrsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssociatedIpv6PoolCidrsResponse)
    Q_DISABLE_COPY(GetAssociatedIpv6PoolCidrsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
