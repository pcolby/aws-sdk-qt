// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONSETTINGSREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONSETTINGSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateapplicationsettingsrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApplicationSettingsRequest;

class UpdateApplicationSettingsRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateApplicationSettingsRequestPrivate(const PinpointRequest::Action action,
                                   UpdateApplicationSettingsRequest * const q);
    UpdateApplicationSettingsRequestPrivate(const UpdateApplicationSettingsRequestPrivate &other,
                                   UpdateApplicationSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationSettingsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
