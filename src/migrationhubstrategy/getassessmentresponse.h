// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTRESPONSE_H
#define QTAWS_GETASSESSMENTRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getassessmentrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetAssessmentResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetAssessmentResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetAssessmentResponse(const GetAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentResponse)
    Q_DISABLE_COPY(GetAssessmentResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
