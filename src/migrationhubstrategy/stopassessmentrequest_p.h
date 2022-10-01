// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPASSESSMENTREQUEST_P_H
#define QTAWS_STOPASSESSMENTREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "stopassessmentrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StopAssessmentRequest;

class StopAssessmentRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    StopAssessmentRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   StopAssessmentRequest * const q);
    StopAssessmentRequestPrivate(const StopAssessmentRequestPrivate &other,
                                   StopAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopAssessmentRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
