// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTENDEEREQUEST_P_H
#define QTAWS_CREATEATTENDEEREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "createattendeerequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class CreateAttendeeRequest;

class CreateAttendeeRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    CreateAttendeeRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   CreateAttendeeRequest * const q);
    CreateAttendeeRequestPrivate(const CreateAttendeeRequestPrivate &other,
                                   CreateAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAttendeeRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
