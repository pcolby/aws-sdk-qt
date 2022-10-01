// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHIMPORTEVIDENCETOASSESSMENTCONTROLREQUEST_H
#define QTAWS_BATCHIMPORTEVIDENCETOASSESSMENTCONTROLREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchImportEvidenceToAssessmentControlRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT BatchImportEvidenceToAssessmentControlRequest : public AuditManagerRequest {

public:
    BatchImportEvidenceToAssessmentControlRequest(const BatchImportEvidenceToAssessmentControlRequest &other);
    BatchImportEvidenceToAssessmentControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchImportEvidenceToAssessmentControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
