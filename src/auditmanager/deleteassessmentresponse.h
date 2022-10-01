// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTRESPONSE_H
#define QTAWS_DELETEASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "deleteassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    DeleteAssessmentResponse(const DeleteAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentResponse)
    Q_DISABLE_COPY(DeleteAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
