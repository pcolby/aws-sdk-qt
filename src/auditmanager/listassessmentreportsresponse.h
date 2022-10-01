// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTREPORTSRESPONSE_H
#define QTAWS_LISTASSESSMENTREPORTSRESPONSE_H

#include "auditmanagerresponse.h"
#include "listassessmentreportsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentReportsResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentReportsResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListAssessmentReportsResponse(const ListAssessmentReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentReportsResponse)
    Q_DISABLE_COPY(ListAssessmentReportsResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
