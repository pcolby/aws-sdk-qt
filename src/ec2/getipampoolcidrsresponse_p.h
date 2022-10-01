// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMPOOLCIDRSRESPONSE_P_H
#define QTAWS_GETIPAMPOOLCIDRSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetIpamPoolCidrsResponse;

class GetIpamPoolCidrsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetIpamPoolCidrsResponsePrivate(GetIpamPoolCidrsResponse * const q);

    void parseGetIpamPoolCidrsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIpamPoolCidrsResponse)
    Q_DISABLE_COPY(GetIpamPoolCidrsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
