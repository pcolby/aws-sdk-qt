// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTFRAMEWORKSRESPONSE_H
#define QTAWS_LISTASSESSMENTFRAMEWORKSRESPONSE_H

#include "auditmanagerresponse.h"
#include "listassessmentframeworksrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentFrameworksResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentFrameworksResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListAssessmentFrameworksResponse(const ListAssessmentFrameworksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentFrameworksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentFrameworksResponse)
    Q_DISABLE_COPY(ListAssessmentFrameworksResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
