// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTREPORTSRESPONSE_P_H
#define QTAWS_LISTASSESSMENTREPORTSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentReportsResponse;

class ListAssessmentReportsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListAssessmentReportsResponsePrivate(ListAssessmentReportsResponse * const q);

    void parseListAssessmentReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentReportsResponse)
    Q_DISABLE_COPY(ListAssessmentReportsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
