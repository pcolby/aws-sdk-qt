// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEIPAMPOOLALLOCATIONRESPONSE_P_H
#define QTAWS_RELEASEIPAMPOOLALLOCATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReleaseIpamPoolAllocationResponse;

class ReleaseIpamPoolAllocationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReleaseIpamPoolAllocationResponsePrivate(ReleaseIpamPoolAllocationResponse * const q);

    void parseReleaseIpamPoolAllocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReleaseIpamPoolAllocationResponse)
    Q_DISABLE_COPY(ReleaseIpamPoolAllocationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
