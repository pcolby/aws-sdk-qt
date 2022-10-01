// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTFRAMEWORKREQUEST_H
#define QTAWS_CREATEASSESSMENTFRAMEWORKREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentFrameworkRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT CreateAssessmentFrameworkRequest : public AuditManagerRequest {

public:
    CreateAssessmentFrameworkRequest(const CreateAssessmentFrameworkRequest &other);
    CreateAssessmentFrameworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentFrameworkRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
