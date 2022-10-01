// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTREQUEST_H
#define QTAWS_UPDATEASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentRequest : public AuditManagerRequest {

public:
    UpdateAssessmentRequest(const UpdateAssessmentRequest &other);
    UpdateAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
