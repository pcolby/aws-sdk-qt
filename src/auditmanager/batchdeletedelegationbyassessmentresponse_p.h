// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDELEGATIONBYASSESSMENTRESPONSE_P_H
#define QTAWS_BATCHDELETEDELEGATIONBYASSESSMENTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class BatchDeleteDelegationByAssessmentResponse;

class BatchDeleteDelegationByAssessmentResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit BatchDeleteDelegationByAssessmentResponsePrivate(BatchDeleteDelegationByAssessmentResponse * const q);

    void parseBatchDeleteDelegationByAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteDelegationByAssessmentResponse)
    Q_DISABLE_COPY(BatchDeleteDelegationByAssessmentResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
