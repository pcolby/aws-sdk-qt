// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONIPAMPOOLCIDRRESPONSE_P_H
#define QTAWS_PROVISIONIPAMPOOLCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ProvisionIpamPoolCidrResponse;

class ProvisionIpamPoolCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ProvisionIpamPoolCidrResponsePrivate(ProvisionIpamPoolCidrResponse * const q);

    void parseProvisionIpamPoolCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProvisionIpamPoolCidrResponse)
    Q_DISABLE_COPY(ProvisionIpamPoolCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
