// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNROUTESRESPONSE_P_H
#define QTAWS_DESCRIBECLIENTVPNROUTESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnRoutesResponse;

class DescribeClientVpnRoutesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeClientVpnRoutesResponsePrivate(DescribeClientVpnRoutesResponse * const q);

    void parseDescribeClientVpnRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnRoutesResponse)
    Q_DISABLE_COPY(DescribeClientVpnRoutesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
