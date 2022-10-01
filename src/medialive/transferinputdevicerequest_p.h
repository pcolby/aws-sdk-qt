// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERINPUTDEVICEREQUEST_P_H
#define QTAWS_TRANSFERINPUTDEVICEREQUEST_P_H

#include "medialiverequest_p.h"
#include "transferinputdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class TransferInputDeviceRequest;

class TransferInputDeviceRequestPrivate : public MediaLiveRequestPrivate {

public:
    TransferInputDeviceRequestPrivate(const MediaLiveRequest::Action action,
                                   TransferInputDeviceRequest * const q);
    TransferInputDeviceRequestPrivate(const TransferInputDeviceRequestPrivate &other,
                                   TransferInputDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(TransferInputDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
