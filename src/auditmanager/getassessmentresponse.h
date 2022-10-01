// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTRESPONSE_H
#define QTAWS_GETASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "getassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetAssessmentResponse(const GetAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentResponse)
    Q_DISABLE_COPY(GetAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
