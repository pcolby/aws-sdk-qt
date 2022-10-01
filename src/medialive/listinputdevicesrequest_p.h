// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTDEVICESREQUEST_P_H
#define QTAWS_LISTINPUTDEVICESREQUEST_P_H

#include "medialiverequest_p.h"
#include "listinputdevicesrequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputDevicesRequest;

class ListInputDevicesRequestPrivate : public MediaLiveRequestPrivate {

public:
    ListInputDevicesRequestPrivate(const MediaLiveRequest::Action action,
                                   ListInputDevicesRequest * const q);
    ListInputDevicesRequestPrivate(const ListInputDevicesRequestPrivate &other,
                                   ListInputDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInputDevicesRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
