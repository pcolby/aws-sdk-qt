// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTSTATUSRESPONSE_H
#define QTAWS_UPDATEASSESSMENTSTATUSRESPONSE_H

#include "auditmanagerresponse.h"
#include "updateassessmentstatusrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentStatusResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentStatusResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    UpdateAssessmentStatusResponse(const UpdateAssessmentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssessmentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentStatusResponse)
    Q_DISABLE_COPY(UpdateAssessmentStatusResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
