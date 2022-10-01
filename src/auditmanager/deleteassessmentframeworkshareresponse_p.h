// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTFRAMEWORKSHARERESPONSE_P_H
#define QTAWS_DELETEASSESSMENTFRAMEWORKSHARERESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentFrameworkShareResponse;

class DeleteAssessmentFrameworkShareResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit DeleteAssessmentFrameworkShareResponsePrivate(DeleteAssessmentFrameworkShareResponse * const q);

    void parseDeleteAssessmentFrameworkShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentFrameworkShareResponse)
    Q_DISABLE_COPY(DeleteAssessmentFrameworkShareResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
