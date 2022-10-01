// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSBYASSESSMENTREQUEST_H
#define QTAWS_GETINSIGHTSBYASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetInsightsByAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetInsightsByAssessmentRequest : public AuditManagerRequest {

public:
    GetInsightsByAssessmentRequest(const GetInsightsByAssessmentRequest &other);
    GetInsightsByAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightsByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
