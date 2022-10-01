// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETREQUESTHISTORYRESPONSE_P_H
#define QTAWS_DESCRIBESPOTFLEETREQUESTHISTORYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetRequestHistoryResponse;

class DescribeSpotFleetRequestHistoryResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSpotFleetRequestHistoryResponsePrivate(DescribeSpotFleetRequestHistoryResponse * const q);

    void parseDescribeSpotFleetRequestHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpotFleetRequestHistoryResponse)
    Q_DISABLE_COPY(DescribeSpotFleetRequestHistoryResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
