// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTDEVICEREQUEST_P_H
#define QTAWS_UPDATEINPUTDEVICEREQUEST_P_H

#include "medialiverequest_p.h"
#include "updateinputdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputDeviceRequest;

class UpdateInputDeviceRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateInputDeviceRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateInputDeviceRequest * const q);
    UpdateInputDeviceRequestPrivate(const UpdateInputDeviceRequestPrivate &other,
                                   UpdateInputDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInputDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
