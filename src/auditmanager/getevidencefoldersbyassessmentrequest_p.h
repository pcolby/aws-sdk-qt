// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTREQUEST_P_H
#define QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getevidencefoldersbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFoldersByAssessmentRequest;

class GetEvidenceFoldersByAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetEvidenceFoldersByAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   GetEvidenceFoldersByAssessmentRequest * const q);
    GetEvidenceFoldersByAssessmentRequestPrivate(const GetEvidenceFoldersByAssessmentRequestPrivate &other,
                                   GetEvidenceFoldersByAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEvidenceFoldersByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
