// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINPUTDEVICETRANSFERREQUEST_P_H
#define QTAWS_REJECTINPUTDEVICETRANSFERREQUEST_P_H

#include "medialiverequest_p.h"
#include "rejectinputdevicetransferrequest.h"

namespace QtAws {
namespace MediaLive {

class RejectInputDeviceTransferRequest;

class RejectInputDeviceTransferRequestPrivate : public MediaLiveRequestPrivate {

public:
    RejectInputDeviceTransferRequestPrivate(const MediaLiveRequest::Action action,
                                   RejectInputDeviceTransferRequest * const q);
    RejectInputDeviceTransferRequestPrivate(const RejectInputDeviceTransferRequestPrivate &other,
                                   RejectInputDeviceTransferRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectInputDeviceTransferRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
