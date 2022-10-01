// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATEIDFORMATRESPONSE_P_H
#define QTAWS_DESCRIBEAGGREGATEIDFORMATRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeAggregateIdFormatResponse;

class DescribeAggregateIdFormatResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeAggregateIdFormatResponsePrivate(DescribeAggregateIdFormatResponse * const q);

    void parseDescribeAggregateIdFormatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAggregateIdFormatResponse)
    Q_DISABLE_COPY(DescribeAggregateIdFormatResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
