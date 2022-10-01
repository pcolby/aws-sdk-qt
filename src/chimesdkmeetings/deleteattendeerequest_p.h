// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTENDEEREQUEST_P_H
#define QTAWS_DELETEATTENDEEREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "deleteattendeerequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class DeleteAttendeeRequest;

class DeleteAttendeeRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    DeleteAttendeeRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   DeleteAttendeeRequest * const q);
    DeleteAttendeeRequestPrivate(const DeleteAttendeeRequestPrivate &other,
                                   DeleteAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAttendeeRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
