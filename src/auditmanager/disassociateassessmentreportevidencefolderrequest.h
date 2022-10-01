// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERREQUEST_H
#define QTAWS_DISASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class DisassociateAssessmentReportEvidenceFolderRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT DisassociateAssessmentReportEvidenceFolderRequest : public AuditManagerRequest {

public:
    DisassociateAssessmentReportEvidenceFolderRequest(const DisassociateAssessmentReportEvidenceFolderRequest &other);
    DisassociateAssessmentReportEvidenceFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAssessmentReportEvidenceFolderRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
