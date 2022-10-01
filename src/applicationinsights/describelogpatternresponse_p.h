// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGPATTERNRESPONSE_P_H
#define QTAWS_DESCRIBELOGPATTERNRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeLogPatternResponse;

class DescribeLogPatternResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DescribeLogPatternResponsePrivate(DescribeLogPatternResponse * const q);

    void parseDescribeLogPatternResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLogPatternResponse)
    Q_DISABLE_COPY(DescribeLogPatternResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
