// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTFRAMEWORKSHARERESPONSE_H
#define QTAWS_UPDATEASSESSMENTFRAMEWORKSHARERESPONSE_H

#include "auditmanagerresponse.h"
#include "updateassessmentframeworksharerequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentFrameworkShareResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentFrameworkShareResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    UpdateAssessmentFrameworkShareResponse(const UpdateAssessmentFrameworkShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssessmentFrameworkShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentFrameworkShareResponse)
    Q_DISABLE_COPY(UpdateAssessmentFrameworkShareResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
