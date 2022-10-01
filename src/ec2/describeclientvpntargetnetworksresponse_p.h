// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNTARGETNETWORKSRESPONSE_P_H
#define QTAWS_DESCRIBECLIENTVPNTARGETNETWORKSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnTargetNetworksResponse;

class DescribeClientVpnTargetNetworksResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeClientVpnTargetNetworksResponsePrivate(DescribeClientVpnTargetNetworksResponse * const q);

    void parseDescribeClientVpnTargetNetworksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnTargetNetworksResponse)
    Q_DISABLE_COPY(DescribeClientVpnTargetNetworksResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
