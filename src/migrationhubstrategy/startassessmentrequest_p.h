// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTREQUEST_P_H
#define QTAWS_STARTASSESSMENTREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "startassessmentrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartAssessmentRequest;

class StartAssessmentRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    StartAssessmentRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   StartAssessmentRequest * const q);
    StartAssessmentRequestPrivate(const StartAssessmentRequestPrivate &other,
                                   StartAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAssessmentRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
