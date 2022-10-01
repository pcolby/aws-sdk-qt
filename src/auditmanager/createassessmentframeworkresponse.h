// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTFRAMEWORKRESPONSE_H
#define QTAWS_CREATEASSESSMENTFRAMEWORKRESPONSE_H

#include "auditmanagerresponse.h"
#include "createassessmentframeworkrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentFrameworkResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT CreateAssessmentFrameworkResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    CreateAssessmentFrameworkResponse(const CreateAssessmentFrameworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssessmentFrameworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentFrameworkResponse)
    Q_DISABLE_COPY(CreateAssessmentFrameworkResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
