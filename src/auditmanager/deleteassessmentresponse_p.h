// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTRESPONSE_P_H
#define QTAWS_DELETEASSESSMENTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentResponse;

class DeleteAssessmentResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit DeleteAssessmentResponsePrivate(DeleteAssessmentResponse * const q);

    void parseDeleteAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentResponse)
    Q_DISABLE_COPY(DeleteAssessmentResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
