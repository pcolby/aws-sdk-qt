// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDELEGATIONBYASSESSMENTRESPONSE_H
#define QTAWS_BATCHDELETEDELEGATIONBYASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "batchdeletedelegationbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchDeleteDelegationByAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT BatchDeleteDelegationByAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    BatchDeleteDelegationByAssessmentResponse(const BatchDeleteDelegationByAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteDelegationByAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteDelegationByAssessmentResponse)
    Q_DISABLE_COPY(BatchDeleteDelegationByAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
