// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONSETTINGSREQUEST_P_H
#define QTAWS_GETAPPLICATIONSETTINGSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getapplicationsettingsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApplicationSettingsRequest;

class GetApplicationSettingsRequestPrivate : public PinpointRequestPrivate {

public:
    GetApplicationSettingsRequestPrivate(const PinpointRequest::Action action,
                                   GetApplicationSettingsRequest * const q);
    GetApplicationSettingsRequestPrivate(const GetApplicationSettingsRequestPrivate &other,
                                   GetApplicationSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationSettingsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
