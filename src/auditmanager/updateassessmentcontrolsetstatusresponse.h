// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTCONTROLSETSTATUSRESPONSE_H
#define QTAWS_UPDATEASSESSMENTCONTROLSETSTATUSRESPONSE_H

#include "auditmanagerresponse.h"
#include "updateassessmentcontrolsetstatusrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentControlSetStatusResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentControlSetStatusResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    UpdateAssessmentControlSetStatusResponse(const UpdateAssessmentControlSetStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssessmentControlSetStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentControlSetStatusResponse)
    Q_DISABLE_COPY(UpdateAssessmentControlSetStatusResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
