// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEASSESSMENTREPORTEVIDENCEREQUEST_H
#define QTAWS_BATCHASSOCIATEASSESSMENTREPORTEVIDENCEREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchAssociateAssessmentReportEvidenceRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT BatchAssociateAssessmentReportEvidenceRequest : public AuditManagerRequest {

public:
    BatchAssociateAssessmentReportEvidenceRequest(const BatchAssociateAssessmentReportEvidenceRequest &other);
    BatchAssociateAssessmentReportEvidenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateAssessmentReportEvidenceRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
