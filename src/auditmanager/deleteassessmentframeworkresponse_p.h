// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTFRAMEWORKRESPONSE_P_H
#define QTAWS_DELETEASSESSMENTFRAMEWORKRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentFrameworkResponse;

class DeleteAssessmentFrameworkResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit DeleteAssessmentFrameworkResponsePrivate(DeleteAssessmentFrameworkResponse * const q);

    void parseDeleteAssessmentFrameworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentFrameworkResponse)
    Q_DISABLE_COPY(DeleteAssessmentFrameworkResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
