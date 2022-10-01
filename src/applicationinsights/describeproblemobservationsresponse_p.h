// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROBLEMOBSERVATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEPROBLEMOBSERVATIONSRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeProblemObservationsResponse;

class DescribeProblemObservationsResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DescribeProblemObservationsResponsePrivate(DescribeProblemObservationsResponse * const q);

    void parseDescribeProblemObservationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProblemObservationsResponse)
    Q_DISABLE_COPY(DescribeProblemObservationsResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
