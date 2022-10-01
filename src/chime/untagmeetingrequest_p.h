// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGMEETINGREQUEST_P_H
#define QTAWS_UNTAGMEETINGREQUEST_P_H

#include "chimerequest_p.h"
#include "untagmeetingrequest.h"

namespace QtAws {
namespace Chime {

class UntagMeetingRequest;

class UntagMeetingRequestPrivate : public ChimeRequestPrivate {

public:
    UntagMeetingRequestPrivate(const ChimeRequest::Action action,
                                   UntagMeetingRequest * const q);
    UntagMeetingRequestPrivate(const UntagMeetingRequestPrivate &other,
                                   UntagMeetingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagMeetingRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
