// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGATTENDEEREQUEST_P_H
#define QTAWS_UNTAGATTENDEEREQUEST_P_H

#include "chimerequest_p.h"
#include "untagattendeerequest.h"

namespace QtAws {
namespace Chime {

class UntagAttendeeRequest;

class UntagAttendeeRequestPrivate : public ChimeRequestPrivate {

public:
    UntagAttendeeRequestPrivate(const ChimeRequest::Action action,
                                   UntagAttendeeRequest * const q);
    UntagAttendeeRequestPrivate(const UntagAttendeeRequestPrivate &other,
                                   UntagAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
