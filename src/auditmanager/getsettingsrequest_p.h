// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSETTINGSREQUEST_P_H
#define QTAWS_GETSETTINGSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getsettingsrequest.h"

namespace QtAws {
namespace AuditManager {

class GetSettingsRequest;

class GetSettingsRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetSettingsRequestPrivate(const AuditManagerRequest::Action action,
                                   GetSettingsRequest * const q);
    GetSettingsRequestPrivate(const GetSettingsRequestPrivate &other,
                                   GetSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSettingsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
