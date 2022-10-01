// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETSRESPONSE_P_H
#define QTAWS_DESCRIBESUBNETSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSubnetsResponse;

class DescribeSubnetsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSubnetsResponsePrivate(DescribeSubnetsResponse * const q);

    void parseDescribeSubnetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSubnetsResponse)
    Q_DISABLE_COPY(DescribeSubnetsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
