// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESETTINGSREQUEST_P_H
#define QTAWS_UPDATESETTINGSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updatesettingsrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateSettingsRequest;

class UpdateSettingsRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateSettingsRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateSettingsRequest * const q);
    UpdateSettingsRequestPrivate(const UpdateSettingsRequestPrivate &other,
                                   UpdateSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSettingsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
