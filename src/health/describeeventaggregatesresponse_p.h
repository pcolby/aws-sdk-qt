// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTAGGREGATESRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTAGGREGATESRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeEventAggregatesResponse;

class DescribeEventAggregatesResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeEventAggregatesResponsePrivate(DescribeEventAggregatesResponse * const q);

    void parseDescribeEventAggregatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventAggregatesResponse)
    Q_DISABLE_COPY(DescribeEventAggregatesResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
