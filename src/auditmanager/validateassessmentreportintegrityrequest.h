// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEASSESSMENTREPORTINTEGRITYREQUEST_H
#define QTAWS_VALIDATEASSESSMENTREPORTINTEGRITYREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class ValidateAssessmentReportIntegrityRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT ValidateAssessmentReportIntegrityRequest : public AuditManagerRequest {

public:
    ValidateAssessmentReportIntegrityRequest(const ValidateAssessmentReportIntegrityRequest &other);
    ValidateAssessmentReportIntegrityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateAssessmentReportIntegrityRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
