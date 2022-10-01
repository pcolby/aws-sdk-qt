// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEATTENDEECAPABILITIESEXCEPTREQUEST_P_H
#define QTAWS_BATCHUPDATEATTENDEECAPABILITIESEXCEPTREQUEST_P_H

#include "chimesdkmeetingsrequest_p.h"
#include "batchupdateattendeecapabilitiesexceptrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class BatchUpdateAttendeeCapabilitiesExceptRequest;

class BatchUpdateAttendeeCapabilitiesExceptRequestPrivate : public ChimeSdkMeetingsRequestPrivate {

public:
    BatchUpdateAttendeeCapabilitiesExceptRequestPrivate(const ChimeSdkMeetingsRequest::Action action,
                                   BatchUpdateAttendeeCapabilitiesExceptRequest * const q);
    BatchUpdateAttendeeCapabilitiesExceptRequestPrivate(const BatchUpdateAttendeeCapabilitiesExceptRequestPrivate &other,
                                   BatchUpdateAttendeeCapabilitiesExceptRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdateAttendeeCapabilitiesExceptRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
