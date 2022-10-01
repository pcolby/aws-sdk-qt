// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTFRAMEWORKRESPONSE_H
#define QTAWS_DELETEASSESSMENTFRAMEWORKRESPONSE_H

#include "auditmanagerresponse.h"
#include "deleteassessmentframeworkrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentFrameworkResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteAssessmentFrameworkResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    DeleteAssessmentFrameworkResponse(const DeleteAssessmentFrameworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssessmentFrameworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentFrameworkResponse)
    Q_DISABLE_COPY(DeleteAssessmentFrameworkResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
