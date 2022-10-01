// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTREPORTREQUEST_H
#define QTAWS_DELETEASSESSMENTREPORTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentReportRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteAssessmentReportRequest : public AuditManagerRequest {

public:
    DeleteAssessmentReportRequest(const DeleteAssessmentReportRequest &other);
    DeleteAssessmentReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentReportRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
