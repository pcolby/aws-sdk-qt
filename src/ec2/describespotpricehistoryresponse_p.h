// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTPRICEHISTORYRESPONSE_P_H
#define QTAWS_DESCRIBESPOTPRICEHISTORYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotPriceHistoryResponse;

class DescribeSpotPriceHistoryResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSpotPriceHistoryResponsePrivate(DescribeSpotPriceHistoryResponse * const q);

    void parseDescribeSpotPriceHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpotPriceHistoryResponse)
    Q_DISABLE_COPY(DescribeSpotPriceHistoryResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
