// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTRESPONSE_H
#define QTAWS_UPDATEASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "updateassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    UpdateAssessmentResponse(const UpdateAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentResponse)
    Q_DISABLE_COPY(UpdateAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
