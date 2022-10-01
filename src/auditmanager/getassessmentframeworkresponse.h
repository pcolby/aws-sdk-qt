// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTFRAMEWORKRESPONSE_H
#define QTAWS_GETASSESSMENTFRAMEWORKRESPONSE_H

#include "auditmanagerresponse.h"
#include "getassessmentframeworkrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentFrameworkResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetAssessmentFrameworkResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetAssessmentFrameworkResponse(const GetAssessmentFrameworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssessmentFrameworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentFrameworkResponse)
    Q_DISABLE_COPY(GetAssessmentFrameworkResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
