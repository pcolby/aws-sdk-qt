// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTREQUEST_H
#define QTAWS_DELETEASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteAssessmentRequest : public AuditManagerRequest {

public:
    DeleteAssessmentRequest(const DeleteAssessmentRequest &other);
    DeleteAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
