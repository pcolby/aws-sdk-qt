// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTFRAMEWORKSHARERESPONSE_H
#define QTAWS_STARTASSESSMENTFRAMEWORKSHARERESPONSE_H

#include "auditmanagerresponse.h"
#include "startassessmentframeworksharerequest.h"

namespace QtAws {
namespace AuditManager {

class StartAssessmentFrameworkShareResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT StartAssessmentFrameworkShareResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    StartAssessmentFrameworkShareResponse(const StartAssessmentFrameworkShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAssessmentFrameworkShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAssessmentFrameworkShareResponse)
    Q_DISABLE_COPY(StartAssessmentFrameworkShareResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
