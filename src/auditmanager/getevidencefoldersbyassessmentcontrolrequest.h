// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTCONTROLREQUEST_H
#define QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTCONTROLREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFoldersByAssessmentControlRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceFoldersByAssessmentControlRequest : public AuditManagerRequest {

public:
    GetEvidenceFoldersByAssessmentControlRequest(const GetEvidenceFoldersByAssessmentControlRequest &other);
    GetEvidenceFoldersByAssessmentControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceFoldersByAssessmentControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
