// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEETINGREQUEST_P_H
#define QTAWS_GETMEETINGREQUEST_P_H

#include "chimerequest_p.h"
#include "getmeetingrequest.h"

namespace QtAws {
namespace Chime {

class GetMeetingRequest;

class GetMeetingRequestPrivate : public ChimeRequestPrivate {

public:
    GetMeetingRequestPrivate(const ChimeRequest::Action action,
                                   GetMeetingRequest * const q);
    GetMeetingRequestPrivate(const GetMeetingRequestPrivate &other,
                                   GetMeetingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMeetingRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
