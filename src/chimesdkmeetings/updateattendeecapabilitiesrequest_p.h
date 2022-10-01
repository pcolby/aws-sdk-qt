// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEATTENDEECAPABILITIESREQUEST_P_H
#define QTAWS_UPDATEATTENDEECAPABILITIESREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "updateattendeecapabilitiesrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class UpdateAttendeeCapabilitiesRequest;

class UpdateAttendeeCapabilitiesRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    UpdateAttendeeCapabilitiesRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   UpdateAttendeeCapabilitiesRequest * const q);
    UpdateAttendeeCapabilitiesRequestPrivate(const UpdateAttendeeCapabilitiesRequestPrivate &other,
                                   UpdateAttendeeCapabilitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAttendeeCapabilitiesRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
