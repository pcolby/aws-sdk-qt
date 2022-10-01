// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGREQUEST_P_H
#define QTAWS_CREATEMEETINGREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "createmeetingrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class CreateMeetingRequest;

class CreateMeetingRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    CreateMeetingRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   CreateMeetingRequest * const q);
    CreateMeetingRequestPrivate(const CreateMeetingRequestPrivate &other,
                                   CreateMeetingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMeetingRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
