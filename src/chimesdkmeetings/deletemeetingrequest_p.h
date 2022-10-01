// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEETINGREQUEST_P_H
#define QTAWS_DELETEMEETINGREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "deletemeetingrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class DeleteMeetingRequest;

class DeleteMeetingRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    DeleteMeetingRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   DeleteMeetingRequest * const q);
    DeleteMeetingRequestPrivate(const DeleteMeetingRequestPrivate &other,
                                   DeleteMeetingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMeetingRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
