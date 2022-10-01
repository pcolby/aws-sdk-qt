// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERRESPONSE_H
#define QTAWS_DISASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERRESPONSE_H

#include "auditmanagerresponse.h"
#include "disassociateassessmentreportevidencefolderrequest.h"

namespace QtAws {
namespace AuditManager {

class DisassociateAssessmentReportEvidenceFolderResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT DisassociateAssessmentReportEvidenceFolderResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    DisassociateAssessmentReportEvidenceFolderResponse(const DisassociateAssessmentReportEvidenceFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateAssessmentReportEvidenceFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAssessmentReportEvidenceFolderResponse)
    Q_DISABLE_COPY(DisassociateAssessmentReportEvidenceFolderResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
