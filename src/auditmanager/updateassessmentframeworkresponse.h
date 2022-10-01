// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTFRAMEWORKRESPONSE_H
#define QTAWS_UPDATEASSESSMENTFRAMEWORKRESPONSE_H

#include "auditmanagerresponse.h"
#include "updateassessmentframeworkrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentFrameworkResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateAssessmentFrameworkResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    UpdateAssessmentFrameworkResponse(const UpdateAssessmentFrameworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssessmentFrameworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentFrameworkResponse)
    Q_DISABLE_COPY(UpdateAssessmentFrameworkResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
