// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBSERVATIONRESPONSE_P_H
#define QTAWS_DESCRIBEOBSERVATIONRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeObservationResponse;

class DescribeObservationResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DescribeObservationResponsePrivate(DescribeObservationResponse * const q);

    void parseDescribeObservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeObservationResponse)
    Q_DISABLE_COPY(DescribeObservationResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
