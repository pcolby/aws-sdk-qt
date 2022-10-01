// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTFRAMEWORKSHAREREQUEST_H
#define QTAWS_STARTASSESSMENTFRAMEWORKSHAREREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class StartAssessmentFrameworkShareRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT StartAssessmentFrameworkShareRequest : public AuditManagerRequest {

public:
    StartAssessmentFrameworkShareRequest(const StartAssessmentFrameworkShareRequest &other);
    StartAssessmentFrameworkShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAssessmentFrameworkShareRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
