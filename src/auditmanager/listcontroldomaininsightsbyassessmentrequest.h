// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLDOMAININSIGHTSBYASSESSMENTREQUEST_H
#define QTAWS_LISTCONTROLDOMAININSIGHTSBYASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlDomainInsightsByAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT ListControlDomainInsightsByAssessmentRequest : public AuditManagerRequest {

public:
    ListControlDomainInsightsByAssessmentRequest(const ListControlDomainInsightsByAssessmentRequest &other);
    ListControlDomainInsightsByAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListControlDomainInsightsByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
