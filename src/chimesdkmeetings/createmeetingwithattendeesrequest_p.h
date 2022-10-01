// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGWITHATTENDEESREQUEST_P_H
#define QTAWS_CREATEMEETINGWITHATTENDEESREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "createmeetingwithattendeesrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class CreateMeetingWithAttendeesRequest;

class CreateMeetingWithAttendeesRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    CreateMeetingWithAttendeesRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   CreateMeetingWithAttendeesRequest * const q);
    CreateMeetingWithAttendeesRequestPrivate(const CreateMeetingWithAttendeesRequestPrivate &other,
                                   CreateMeetingWithAttendeesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMeetingWithAttendeesRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
