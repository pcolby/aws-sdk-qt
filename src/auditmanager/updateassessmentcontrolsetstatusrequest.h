// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTCONTROLSETSTATUSREQUEST_H
#define QTAWS_UPDATEASSESSMENTCONTROLSETSTATUSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentControlSetStatusRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentControlSetStatusRequest : public AuditManagerRequest {

public:
    UpdateAssessmentControlSetStatusRequest(const UpdateAssessmentControlSetStatusRequest &other);
    UpdateAssessmentControlSetStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentControlSetStatusRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
