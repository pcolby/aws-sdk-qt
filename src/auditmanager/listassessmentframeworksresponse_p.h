// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTFRAMEWORKSRESPONSE_P_H
#define QTAWS_LISTASSESSMENTFRAMEWORKSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentFrameworksResponse;

class ListAssessmentFrameworksResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListAssessmentFrameworksResponsePrivate(ListAssessmentFrameworksResponse * const q);

    void parseListAssessmentFrameworksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentFrameworksResponse)
    Q_DISABLE_COPY(ListAssessmentFrameworksResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
