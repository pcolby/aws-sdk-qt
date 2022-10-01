// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERRESPONSE_H
#define QTAWS_ASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERRESPONSE_H

#include "auditmanagerresponse.h"
#include "associateassessmentreportevidencefolderrequest.h"

namespace QtAws {
namespace AuditManager {

class AssociateAssessmentReportEvidenceFolderResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT AssociateAssessmentReportEvidenceFolderResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    AssociateAssessmentReportEvidenceFolderResponse(const AssociateAssessmentReportEvidenceFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateAssessmentReportEvidenceFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAssessmentReportEvidenceFolderResponse)
    Q_DISABLE_COPY(AssociateAssessmentReportEvidenceFolderResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
