// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTFRAMEWORKSHAREREQUEST_H
#define QTAWS_DELETEASSESSMENTFRAMEWORKSHAREREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentFrameworkShareRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteAssessmentFrameworkShareRequest : public AuditManagerRequest {

public:
    DeleteAssessmentFrameworkShareRequest(const DeleteAssessmentFrameworkShareRequest &other);
    DeleteAssessmentFrameworkShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentFrameworkShareRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
