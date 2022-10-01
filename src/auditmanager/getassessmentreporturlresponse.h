// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREPORTURLRESPONSE_H
#define QTAWS_GETASSESSMENTREPORTURLRESPONSE_H

#include "auditmanagerresponse.h"
#include "getassessmentreporturlrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentReportUrlResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetAssessmentReportUrlResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetAssessmentReportUrlResponse(const GetAssessmentReportUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssessmentReportUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentReportUrlResponse)
    Q_DISABLE_COPY(GetAssessmentReportUrlResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
