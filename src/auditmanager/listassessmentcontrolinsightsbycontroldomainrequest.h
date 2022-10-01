// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTCONTROLINSIGHTSBYCONTROLDOMAINREQUEST_H
#define QTAWS_LISTASSESSMENTCONTROLINSIGHTSBYCONTROLDOMAINREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentControlInsightsByControlDomainRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentControlInsightsByControlDomainRequest : public AuditManagerRequest {

public:
    ListAssessmentControlInsightsByControlDomainRequest(const ListAssessmentControlInsightsByControlDomainRequest &other);
    ListAssessmentControlInsightsByControlDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentControlInsightsByControlDomainRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
