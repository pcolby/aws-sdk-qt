// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTRESPONSE_P_H
#define QTAWS_STARTASSESSMENTRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartAssessmentResponse;

class StartAssessmentResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit StartAssessmentResponsePrivate(StartAssessmentResponse * const q);

    void parseStartAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAssessmentResponse)
    Q_DISABLE_COPY(StartAssessmentResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
