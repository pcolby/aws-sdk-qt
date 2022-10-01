// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTRESPONSE_H
#define QTAWS_CREATEASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "createassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT CreateAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    CreateAssessmentResponse(const CreateAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentResponse)
    Q_DISABLE_COPY(CreateAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
