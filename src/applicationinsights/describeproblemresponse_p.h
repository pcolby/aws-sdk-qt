// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROBLEMRESPONSE_P_H
#define QTAWS_DESCRIBEPROBLEMRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeProblemResponse;

class DescribeProblemResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DescribeProblemResponsePrivate(DescribeProblemResponse * const q);

    void parseDescribeProblemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProblemResponse)
    Q_DISABLE_COPY(DescribeProblemResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
