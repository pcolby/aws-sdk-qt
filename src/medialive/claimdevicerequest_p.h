// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMDEVICEREQUEST_P_H
#define QTAWS_CLAIMDEVICEREQUEST_P_H

#include "medialiverequest_p.h"
#include "claimdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class ClaimDeviceRequest;

class ClaimDeviceRequestPrivate : public MediaLiveRequestPrivate {

public:
    ClaimDeviceRequestPrivate(const MediaLiveRequest::Action action,
                                   ClaimDeviceRequest * const q);
    ClaimDeviceRequestPrivate(const ClaimDeviceRequestPrivate &other,
                                   ClaimDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ClaimDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
