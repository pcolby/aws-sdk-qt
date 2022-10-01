// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEASSESSMENTREPORTEVIDENCEREQUEST_H
#define QTAWS_BATCHDISASSOCIATEASSESSMENTREPORTEVIDENCEREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchDisassociateAssessmentReportEvidenceRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT BatchDisassociateAssessmentReportEvidenceRequest : public AuditManagerRequest {

public:
    BatchDisassociateAssessmentReportEvidenceRequest(const BatchDisassociateAssessmentReportEvidenceRequest &other);
    BatchDisassociateAssessmentReportEvidenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateAssessmentReportEvidenceRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
