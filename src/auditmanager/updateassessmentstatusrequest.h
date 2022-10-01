// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTSTATUSREQUEST_H
#define QTAWS_UPDATEASSESSMENTSTATUSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentStatusRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentStatusRequest : public AuditManagerRequest {

public:
    UpdateAssessmentStatusRequest(const UpdateAssessmentStatusRequest &other);
    UpdateAssessmentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentStatusRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
