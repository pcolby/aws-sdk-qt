// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTFRAMEWORKREQUEST_H
#define QTAWS_GETASSESSMENTFRAMEWORKREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentFrameworkRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetAssessmentFrameworkRequest : public AuditManagerRequest {

public:
    GetAssessmentFrameworkRequest(const GetAssessmentFrameworkRequest &other);
    GetAssessmentFrameworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentFrameworkRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
