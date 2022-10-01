// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIMENTRESPONSE_P_H
#define QTAWS_UPDATEEXPERIMENTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class UpdateExperimentResponse;

class UpdateExperimentResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit UpdateExperimentResponsePrivate(UpdateExperimentResponse * const q);

    void parseUpdateExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateExperimentResponse)
    Q_DISABLE_COPY(UpdateExperimentResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
