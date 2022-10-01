// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPASSESSMENTRESPONSE_P_H
#define QTAWS_STOPASSESSMENTRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StopAssessmentResponse;

class StopAssessmentResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit StopAssessmentResponsePrivate(StopAssessmentResponse * const q);

    void parseStopAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopAssessmentResponse)
    Q_DISABLE_COPY(StopAssessmentResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
