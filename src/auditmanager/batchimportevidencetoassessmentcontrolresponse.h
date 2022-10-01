// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHIMPORTEVIDENCETOASSESSMENTCONTROLRESPONSE_H
#define QTAWS_BATCHIMPORTEVIDENCETOASSESSMENTCONTROLRESPONSE_H

#include "auditmanagerresponse.h"
#include "batchimportevidencetoassessmentcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchImportEvidenceToAssessmentControlResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT BatchImportEvidenceToAssessmentControlResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    BatchImportEvidenceToAssessmentControlResponse(const BatchImportEvidenceToAssessmentControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchImportEvidenceToAssessmentControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchImportEvidenceToAssessmentControlResponse)
    Q_DISABLE_COPY(BatchImportEvidenceToAssessmentControlResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
