// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceCreditSpecificationsResponse;

class DescribeInstanceCreditSpecificationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInstanceCreditSpecificationsResponsePrivate(DescribeInstanceCreditSpecificationsResponse * const q);

    void parseDescribeInstanceCreditSpecificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceCreditSpecificationsResponse)
    Q_DISABLE_COPY(DescribeInstanceCreditSpecificationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
