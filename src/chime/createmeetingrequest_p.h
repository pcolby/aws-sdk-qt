// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGREQUEST_P_H
#define QTAWS_CREATEMEETINGREQUEST_P_H

#include "chimerequest_p.h"
#include "createmeetingrequest.h"

namespace QtAws {
namespace Chime {

class CreateMeetingRequest;

class CreateMeetingRequestPrivate : public ChimeRequestPrivate {

public:
    CreateMeetingRequestPrivate(const ChimeRequest::Action action,
                                   CreateMeetingRequest * const q);
    CreateMeetingRequestPrivate(const CreateMeetingRequestPrivate &other,
                                   CreateMeetingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMeetingRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
