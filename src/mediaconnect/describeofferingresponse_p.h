// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOFFERINGRESPONSE_P_H
#define QTAWS_DESCRIBEOFFERINGRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class DescribeOfferingResponse;

class DescribeOfferingResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit DescribeOfferingResponsePrivate(DescribeOfferingResponse * const q);

    void parseDescribeOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOfferingResponse)
    Q_DISABLE_COPY(DescribeOfferingResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
