// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEEVENTSREQUEST_P_H
#define QTAWS_LISTDEVICEEVENTSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listdeviceeventsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListDeviceEventsRequest;

class ListDeviceEventsRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListDeviceEventsRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListDeviceEventsRequest * const q);
    ListDeviceEventsRequestPrivate(const ListDeviceEventsRequestPrivate &other,
                                   ListDeviceEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceEventsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
