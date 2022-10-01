// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSOLUTIONMETRICSRESPONSE_P_H
#define QTAWS_GETSOLUTIONMETRICSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class GetSolutionMetricsResponse;

class GetSolutionMetricsResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit GetSolutionMetricsResponsePrivate(GetSolutionMetricsResponse * const q);

    void parseGetSolutionMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSolutionMetricsResponse)
    Q_DISABLE_COPY(GetSolutionMetricsResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
