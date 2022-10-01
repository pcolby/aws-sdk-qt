// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBYOIPCIDRSRESPONSE_P_H
#define QTAWS_DESCRIBEBYOIPCIDRSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeByoipCidrsResponse;

class DescribeByoipCidrsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeByoipCidrsResponsePrivate(DescribeByoipCidrsResponse * const q);

    void parseDescribeByoipCidrsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeByoipCidrsResponse)
    Q_DISABLE_COPY(DescribeByoipCidrsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
