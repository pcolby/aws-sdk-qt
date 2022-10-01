// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTCONTROLREQUEST_P_H
#define QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTCONTROLREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getevidencefoldersbyassessmentcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFoldersByAssessmentControlRequest;

class GetEvidenceFoldersByAssessmentControlRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetEvidenceFoldersByAssessmentControlRequestPrivate(const AuditManagerRequest::Action action,
                                   GetEvidenceFoldersByAssessmentControlRequest * const q);
    GetEvidenceFoldersByAssessmentControlRequestPrivate(const GetEvidenceFoldersByAssessmentControlRequestPrivate &other,
                                   GetEvidenceFoldersByAssessmentControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEvidenceFoldersByAssessmentControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
