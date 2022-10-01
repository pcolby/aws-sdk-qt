// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotDatafeedSubscriptionResponse;

class DescribeSpotDatafeedSubscriptionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSpotDatafeedSubscriptionResponsePrivate(DescribeSpotDatafeedSubscriptionResponse * const q);

    void parseDescribeSpotDatafeedSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpotDatafeedSubscriptionResponse)
    Q_DISABLE_COPY(DescribeSpotDatafeedSubscriptionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
