// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTFRAMEWORKSHAREREQUESTSRESPONSE_P_H
#define QTAWS_LISTASSESSMENTFRAMEWORKSHAREREQUESTSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentFrameworkShareRequestsResponse;

class ListAssessmentFrameworkShareRequestsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListAssessmentFrameworkShareRequestsResponsePrivate(ListAssessmentFrameworkShareRequestsResponse * const q);

    void parseListAssessmentFrameworkShareRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentFrameworkShareRequestsResponse)
    Q_DISABLE_COPY(ListAssessmentFrameworkShareRequestsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
