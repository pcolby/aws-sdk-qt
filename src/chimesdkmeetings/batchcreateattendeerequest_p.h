// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEATTENDEEREQUEST_P_H
#define QTAWS_BATCHCREATEATTENDEEREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "batchcreateattendeerequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class BatchCreateAttendeeRequest;

class BatchCreateAttendeeRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    BatchCreateAttendeeRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   BatchCreateAttendeeRequest * const q);
    BatchCreateAttendeeRequestPrivate(const BatchCreateAttendeeRequestPrivate &other,
                                   BatchCreateAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchCreateAttendeeRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
