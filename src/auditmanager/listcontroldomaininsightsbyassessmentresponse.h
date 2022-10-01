// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLDOMAININSIGHTSBYASSESSMENTRESPONSE_H
#define QTAWS_LISTCONTROLDOMAININSIGHTSBYASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "listcontroldomaininsightsbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlDomainInsightsByAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListControlDomainInsightsByAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListControlDomainInsightsByAssessmentResponse(const ListControlDomainInsightsByAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListControlDomainInsightsByAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListControlDomainInsightsByAssessmentResponse)
    Q_DISABLE_COPY(ListControlDomainInsightsByAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
