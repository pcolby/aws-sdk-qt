// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMERGENCYCONTACTSETTINGSREQUEST_P_H
#define QTAWS_UPDATEEMERGENCYCONTACTSETTINGSREQUEST_P_H

#include "shieldrequest_p.h"
#include "updateemergencycontactsettingsrequest.h"

namespace QtAws {
namespace Shield {

class UpdateEmergencyContactSettingsRequest;

class UpdateEmergencyContactSettingsRequestPrivate : public ShieldRequestPrivate {

public:
    UpdateEmergencyContactSettingsRequestPrivate(const ShieldRequest::Action action,
                                   UpdateEmergencyContactSettingsRequest * const q);
    UpdateEmergencyContactSettingsRequestPrivate(const UpdateEmergencyContactSettingsRequestPrivate &other,
                                   UpdateEmergencyContactSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEmergencyContactSettingsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
