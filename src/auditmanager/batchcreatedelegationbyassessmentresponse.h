// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEDELEGATIONBYASSESSMENTRESPONSE_H
#define QTAWS_BATCHCREATEDELEGATIONBYASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "batchcreatedelegationbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchCreateDelegationByAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT BatchCreateDelegationByAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    BatchCreateDelegationByAssessmentResponse(const BatchCreateDelegationByAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchCreateDelegationByAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateDelegationByAssessmentResponse)
    Q_DISABLE_COPY(BatchCreateDelegationByAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
