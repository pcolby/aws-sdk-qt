// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTREQUEST_H
#define QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFoldersByAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceFoldersByAssessmentRequest : public AuditManagerRequest {

public:
    GetEvidenceFoldersByAssessmentRequest(const GetEvidenceFoldersByAssessmentRequest &other);
    GetEvidenceFoldersByAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceFoldersByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
