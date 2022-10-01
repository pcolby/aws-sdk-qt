// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTCONTROLRESPONSE_H
#define QTAWS_UPDATEASSESSMENTCONTROLRESPONSE_H

#include "auditmanagerresponse.h"
#include "updateassessmentcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentControlResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentControlResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    UpdateAssessmentControlResponse(const UpdateAssessmentControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssessmentControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentControlResponse)
    Q_DISABLE_COPY(UpdateAssessmentControlResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
