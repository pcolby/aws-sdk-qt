// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTRESPONSE_P_H
#define QTAWS_GETEXPERIMENTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class GetExperimentResponse;

class GetExperimentResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit GetExperimentResponsePrivate(GetExperimentResponse * const q);

    void parseGetExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExperimentResponse)
    Q_DISABLE_COPY(GetExperimentResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
