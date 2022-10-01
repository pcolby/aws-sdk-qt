// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGMEETINGREQUEST_P_H
#define QTAWS_TAGMEETINGREQUEST_P_H

#include "chimerequest_p.h"
#include "tagmeetingrequest.h"

namespace QtAws {
namespace Chime {

class TagMeetingRequest;

class TagMeetingRequestPrivate : public ChimeRequestPrivate {

public:
    TagMeetingRequestPrivate(const ChimeRequest::Action action,
                                   TagMeetingRequest * const q);
    TagMeetingRequestPrivate(const TagMeetingRequestPrivate &other,
                                   TagMeetingRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagMeetingRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
