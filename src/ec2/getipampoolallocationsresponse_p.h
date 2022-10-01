// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMPOOLALLOCATIONSRESPONSE_P_H
#define QTAWS_GETIPAMPOOLALLOCATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetIpamPoolAllocationsResponse;

class GetIpamPoolAllocationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetIpamPoolAllocationsResponsePrivate(GetIpamPoolAllocationsResponse * const q);

    void parseGetIpamPoolAllocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIpamPoolAllocationsResponse)
    Q_DISABLE_COPY(GetIpamPoolAllocationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
