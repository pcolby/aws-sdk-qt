// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERREQUEST_H
#define QTAWS_ASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class AssociateAssessmentReportEvidenceFolderRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT AssociateAssessmentReportEvidenceFolderRequest : public AuditManagerRequest {

public:
    AssociateAssessmentReportEvidenceFolderRequest(const AssociateAssessmentReportEvidenceFolderRequest &other);
    AssociateAssessmentReportEvidenceFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAssessmentReportEvidenceFolderRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
