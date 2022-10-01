// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSBYASSESSMENTRESPONSE_H
#define QTAWS_GETINSIGHTSBYASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "getinsightsbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class GetInsightsByAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetInsightsByAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetInsightsByAssessmentResponse(const GetInsightsByAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInsightsByAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightsByAssessmentResponse)
    Q_DISABLE_COPY(GetInsightsByAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
