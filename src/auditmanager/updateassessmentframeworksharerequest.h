// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTFRAMEWORKSHAREREQUEST_H
#define QTAWS_UPDATEASSESSMENTFRAMEWORKSHAREREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentFrameworkShareRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentFrameworkShareRequest : public AuditManagerRequest {

public:
    UpdateAssessmentFrameworkShareRequest(const UpdateAssessmentFrameworkShareRequest &other);
    UpdateAssessmentFrameworkShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentFrameworkShareRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
