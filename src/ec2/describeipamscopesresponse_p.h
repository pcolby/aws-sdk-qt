// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMSCOPESRESPONSE_P_H
#define QTAWS_DESCRIBEIPAMSCOPESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamScopesResponse;

class DescribeIpamScopesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeIpamScopesResponsePrivate(DescribeIpamScopesResponse * const q);

    void parseDescribeIpamScopesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIpamScopesResponse)
    Q_DISABLE_COPY(DescribeIpamScopesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
