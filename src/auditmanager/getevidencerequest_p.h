// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEREQUEST_P_H
#define QTAWS_GETEVIDENCEREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getevidencerequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceRequest;

class GetEvidenceRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetEvidenceRequestPrivate(const AuditManagerRequest::Action action,
                                   GetEvidenceRequest * const q);
    GetEvidenceRequestPrivate(const GetEvidenceRequestPrivate &other,
                                   GetEvidenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEvidenceRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
