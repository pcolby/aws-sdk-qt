// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTCONTROLINSIGHTSBYCONTROLDOMAINRESPONSE_H
#define QTAWS_LISTASSESSMENTCONTROLINSIGHTSBYCONTROLDOMAINRESPONSE_H

#include "auditmanagerresponse.h"
#include "listassessmentcontrolinsightsbycontroldomainrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentControlInsightsByControlDomainResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentControlInsightsByControlDomainResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListAssessmentControlInsightsByControlDomainResponse(const ListAssessmentControlInsightsByControlDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentControlInsightsByControlDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentControlInsightsByControlDomainResponse)
    Q_DISABLE_COPY(ListAssessmentControlInsightsByControlDomainResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
