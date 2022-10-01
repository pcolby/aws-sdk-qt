// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMSRESPONSE_P_H
#define QTAWS_DESCRIBEIPAMSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamsResponse;

class DescribeIpamsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeIpamsResponsePrivate(DescribeIpamsResponse * const q);

    void parseDescribeIpamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIpamsResponse)
    Q_DISABLE_COPY(DescribeIpamsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
