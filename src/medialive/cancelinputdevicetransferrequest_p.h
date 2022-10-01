// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINPUTDEVICETRANSFERREQUEST_P_H
#define QTAWS_CANCELINPUTDEVICETRANSFERREQUEST_P_H

#include "medialiverequest_p.h"
#include "cancelinputdevicetransferrequest.h"

namespace QtAws {
namespace MediaLive {

class CancelInputDeviceTransferRequest;

class CancelInputDeviceTransferRequestPrivate : public MediaLiveRequestPrivate {

public:
    CancelInputDeviceTransferRequestPrivate(const MediaLiveRequest::Action action,
                                   CancelInputDeviceTransferRequest * const q);
    CancelInputDeviceTransferRequestPrivate(const CancelInputDeviceTransferRequestPrivate &other,
                                   CancelInputDeviceTransferRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelInputDeviceTransferRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
