// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGELOGSREQUEST_P_H
#define QTAWS_GETCHANGELOGSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getchangelogsrequest.h"

namespace QtAws {
namespace AuditManager {

class GetChangeLogsRequest;

class GetChangeLogsRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetChangeLogsRequestPrivate(const AuditManagerRequest::Action action,
                                   GetChangeLogsRequest * const q);
    GetChangeLogsRequestPrivate(const GetChangeLogsRequestPrivate &other,
                                   GetChangeLogsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChangeLogsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
