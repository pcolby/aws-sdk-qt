// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYAGGREGATESRESPONSE_P_H
#define QTAWS_DESCRIBEENTITYAGGREGATESRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeEntityAggregatesResponse;

class DescribeEntityAggregatesResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeEntityAggregatesResponsePrivate(DescribeEntityAggregatesResponse * const q);

    void parseDescribeEntityAggregatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEntityAggregatesResponse)
    Q_DISABLE_COPY(DescribeEntityAggregatesResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
