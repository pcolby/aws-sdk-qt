// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTFRAMEWORKSHARERESPONSE_H
#define QTAWS_DELETEASSESSMENTFRAMEWORKSHARERESPONSE_H

#include "auditmanagerresponse.h"
#include "deleteassessmentframeworksharerequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentFrameworkShareResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteAssessmentFrameworkShareResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    DeleteAssessmentFrameworkShareResponse(const DeleteAssessmentFrameworkShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssessmentFrameworkShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentFrameworkShareResponse)
    Q_DISABLE_COPY(DeleteAssessmentFrameworkShareResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
