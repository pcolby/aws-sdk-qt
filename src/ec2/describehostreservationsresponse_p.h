// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTRESERVATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEHOSTRESERVATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostReservationsResponse;

class DescribeHostReservationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeHostReservationsResponsePrivate(DescribeHostReservationsResponse * const q);

    void parseDescribeHostReservationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHostReservationsResponse)
    Q_DISABLE_COPY(DescribeHostReservationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
