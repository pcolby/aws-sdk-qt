// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPASSESSMENTRESPONSE_H
#define QTAWS_STOPASSESSMENTRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "stopassessmentrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StopAssessmentResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT StopAssessmentResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    StopAssessmentResponse(const StopAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAssessmentResponse)
    Q_DISABLE_COPY(StopAssessmentResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
