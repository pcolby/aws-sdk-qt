// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGWITHATTENDEESREQUEST_P_H
#define QTAWS_CREATEMEETINGWITHATTENDEESREQUEST_P_H

#include "chimerequest_p.h"
#include "createmeetingwithattendeesrequest.h"

namespace QtAws {
namespace Chime {

class CreateMeetingWithAttendeesRequest;

class CreateMeetingWithAttendeesRequestPrivate : public ChimeRequestPrivate {

public:
    CreateMeetingWithAttendeesRequestPrivate(const ChimeRequest::Action action,
                                   CreateMeetingWithAttendeesRequest * const q);
    CreateMeetingWithAttendeesRequestPrivate(const CreateMeetingWithAttendeesRequestPrivate &other,
                                   CreateMeetingWithAttendeesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMeetingWithAttendeesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
