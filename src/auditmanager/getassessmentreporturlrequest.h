// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREPORTURLREQUEST_H
#define QTAWS_GETASSESSMENTREPORTURLREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentReportUrlRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetAssessmentReportUrlRequest : public AuditManagerRequest {

public:
    GetAssessmentReportUrlRequest(const GetAssessmentReportUrlRequest &other);
    GetAssessmentReportUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentReportUrlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
