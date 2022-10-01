// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEIPAMPOOLCIDRRESPONSE_P_H
#define QTAWS_ALLOCATEIPAMPOOLCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AllocateIpamPoolCidrResponse;

class AllocateIpamPoolCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AllocateIpamPoolCidrResponsePrivate(AllocateIpamPoolCidrResponse * const q);

    void parseAllocateIpamPoolCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocateIpamPoolCidrResponse)
    Q_DISABLE_COPY(AllocateIpamPoolCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
