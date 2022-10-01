// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEBYEVIDENCEFOLDERREQUEST_P_H
#define QTAWS_GETEVIDENCEBYEVIDENCEFOLDERREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getevidencebyevidencefolderrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceByEvidenceFolderRequest;

class GetEvidenceByEvidenceFolderRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetEvidenceByEvidenceFolderRequestPrivate(const AuditManagerRequest::Action action,
                                   GetEvidenceByEvidenceFolderRequest * const q);
    GetEvidenceByEvidenceFolderRequestPrivate(const GetEvidenceByEvidenceFolderRequestPrivate &other,
                                   GetEvidenceByEvidenceFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEvidenceByEvidenceFolderRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
