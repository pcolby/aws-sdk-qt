// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTREQUEST_H
#define QTAWS_STARTASSESSMENTREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartAssessmentRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT StartAssessmentRequest : public MigrationHubStrategyRequest {

public:
    StartAssessmentRequest(const StartAssessmentRequest &other);
    StartAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAssessmentRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
