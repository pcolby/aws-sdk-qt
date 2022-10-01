// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEDELEGATIONBYASSESSMENTRESPONSE_P_H
#define QTAWS_BATCHCREATEDELEGATIONBYASSESSMENTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class BatchCreateDelegationByAssessmentResponse;

class BatchCreateDelegationByAssessmentResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit BatchCreateDelegationByAssessmentResponsePrivate(BatchCreateDelegationByAssessmentResponse * const q);

    void parseBatchCreateDelegationByAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCreateDelegationByAssessmentResponse)
    Q_DISABLE_COPY(BatchCreateDelegationByAssessmentResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
