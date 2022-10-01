// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTCONTROLREQUEST_H
#define QTAWS_UPDATEASSESSMENTCONTROLREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentControlRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentControlRequest : public AuditManagerRequest {

public:
    UpdateAssessmentControlRequest(const UpdateAssessmentControlRequest &other);
    UpdateAssessmentControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
