// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINPUTDEVICEREQUEST_P_H
#define QTAWS_REBOOTINPUTDEVICEREQUEST_P_H

#include "medialiverequest_p.h"
#include "rebootinputdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class RebootInputDeviceRequest;

class RebootInputDeviceRequestPrivate : public MediaLiveRequestPrivate {

public:
    RebootInputDeviceRequestPrivate(const MediaLiveRequest::Action action,
                                   RebootInputDeviceRequest * const q);
    RebootInputDeviceRequestPrivate(const RebootInputDeviceRequestPrivate &other,
                                   RebootInputDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootInputDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
