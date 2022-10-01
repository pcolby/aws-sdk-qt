// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTFRAMEWORKSHAREREQUESTSRESPONSE_H
#define QTAWS_LISTASSESSMENTFRAMEWORKSHAREREQUESTSRESPONSE_H

#include "auditmanagerresponse.h"
#include "listassessmentframeworksharerequestsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentFrameworkShareRequestsResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentFrameworkShareRequestsResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListAssessmentFrameworkShareRequestsResponse(const ListAssessmentFrameworkShareRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentFrameworkShareRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentFrameworkShareRequestsResponse)
    Q_DISABLE_COPY(ListAssessmentFrameworkShareRequestsResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
