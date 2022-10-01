// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTECALCULATORRESPONSE_P_H
#define QTAWS_DESCRIBEROUTECALCULATORRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DescribeRouteCalculatorResponse;

class DescribeRouteCalculatorResponsePrivate : public LocationResponsePrivate {

public:

    explicit DescribeRouteCalculatorResponsePrivate(DescribeRouteCalculatorResponse * const q);

    void parseDescribeRouteCalculatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRouteCalculatorResponse)
    Q_DISABLE_COPY(DescribeRouteCalculatorResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
