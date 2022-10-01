// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINPUTDEVICETRANSFERREQUEST_P_H
#define QTAWS_ACCEPTINPUTDEVICETRANSFERREQUEST_P_H

#include "medialiverequest_p.h"
#include "acceptinputdevicetransferrequest.h"

namespace QtAws {
namespace MediaLive {

class AcceptInputDeviceTransferRequest;

class AcceptInputDeviceTransferRequestPrivate : public MediaLiveRequestPrivate {

public:
    AcceptInputDeviceTransferRequestPrivate(const MediaLiveRequest::Action action,
                                   AcceptInputDeviceTransferRequest * const q);
    AcceptInputDeviceTransferRequestPrivate(const AcceptInputDeviceTransferRequestPrivate &other,
                                   AcceptInputDeviceTransferRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptInputDeviceTransferRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
