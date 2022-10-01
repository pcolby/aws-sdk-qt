// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTFRAMEWORKREQUEST_H
#define QTAWS_UPDATEASSESSMENTFRAMEWORKREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentFrameworkRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentFrameworkRequest : public AuditManagerRequest {

public:
    UpdateAssessmentFrameworkRequest(const UpdateAssessmentFrameworkRequest &other);
    UpdateAssessmentFrameworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentFrameworkRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
