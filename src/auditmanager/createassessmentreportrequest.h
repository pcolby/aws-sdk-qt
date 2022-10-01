// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTREPORTREQUEST_H
#define QTAWS_CREATEASSESSMENTREPORTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentReportRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT CreateAssessmentReportRequest : public AuditManagerRequest {

public:
    CreateAssessmentReportRequest(const CreateAssessmentReportRequest &other);
    CreateAssessmentReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentReportRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
