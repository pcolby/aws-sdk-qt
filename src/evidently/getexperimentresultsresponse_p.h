// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTRESULTSRESPONSE_P_H
#define QTAWS_GETEXPERIMENTRESULTSRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class GetExperimentResultsResponse;

class GetExperimentResultsResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit GetExperimentResultsResponsePrivate(GetExperimentResultsResponse * const q);

    void parseGetExperimentResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExperimentResultsResponse)
    Q_DISABLE_COPY(GetExperimentResultsResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
