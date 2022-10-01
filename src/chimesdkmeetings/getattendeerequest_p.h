// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTENDEEREQUEST_P_H
#define QTAWS_GETATTENDEEREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "getattendeerequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class GetAttendeeRequest;

class GetAttendeeRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    GetAttendeeRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   GetAttendeeRequest * const q);
    GetAttendeeRequestPrivate(const GetAttendeeRequestPrivate &other,
                                   GetAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAttendeeRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
