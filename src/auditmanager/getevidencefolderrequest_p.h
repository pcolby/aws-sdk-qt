// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERREQUEST_P_H
#define QTAWS_GETEVIDENCEFOLDERREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getevidencefolderrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFolderRequest;

class GetEvidenceFolderRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetEvidenceFolderRequestPrivate(const AuditManagerRequest::Action action,
                                   GetEvidenceFolderRequest * const q);
    GetEvidenceFolderRequestPrivate(const GetEvidenceFolderRequestPrivate &other,
                                   GetEvidenceFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEvidenceFolderRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
