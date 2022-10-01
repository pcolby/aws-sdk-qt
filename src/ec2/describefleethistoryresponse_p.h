// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETHISTORYRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETHISTORYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetHistoryResponse;

class DescribeFleetHistoryResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeFleetHistoryResponsePrivate(DescribeFleetHistoryResponse * const q);

    void parseDescribeFleetHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetHistoryResponse)
    Q_DISABLE_COPY(DescribeFleetHistoryResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
