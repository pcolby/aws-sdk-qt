// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTDEVICETRANSFERSREQUEST_P_H
#define QTAWS_LISTINPUTDEVICETRANSFERSREQUEST_P_H

#include "medialiverequest_p.h"
#include "listinputdevicetransfersrequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputDeviceTransfersRequest;

class ListInputDeviceTransfersRequestPrivate : public MediaLiveRequestPrivate {

public:
    ListInputDeviceTransfersRequestPrivate(const MediaLiveRequest::Action action,
                                   ListInputDeviceTransfersRequest * const q);
    ListInputDeviceTransfersRequestPrivate(const ListInputDeviceTransfersRequestPrivate &other,
                                   ListInputDeviceTransfersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInputDeviceTransfersRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
