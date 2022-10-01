// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTRESPONSE_H
#define QTAWS_STARTASSESSMENTRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "startassessmentrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartAssessmentResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT StartAssessmentResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    StartAssessmentResponse(const StartAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAssessmentResponse)
    Q_DISABLE_COPY(StartAssessmentResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
