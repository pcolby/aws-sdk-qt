// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTCONTROLRESPONSE_H
#define QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTCONTROLRESPONSE_H

#include "auditmanagerresponse.h"
#include "getevidencefoldersbyassessmentcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFoldersByAssessmentControlResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceFoldersByAssessmentControlResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetEvidenceFoldersByAssessmentControlResponse(const GetEvidenceFoldersByAssessmentControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEvidenceFoldersByAssessmentControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceFoldersByAssessmentControlResponse)
    Q_DISABLE_COPY(GetEvidenceFoldersByAssessmentControlResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
