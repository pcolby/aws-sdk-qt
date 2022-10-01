// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTROOMMESSAGEREQUEST_P_H
#define QTAWS_REDACTROOMMESSAGEREQUEST_P_H

#include "chimerequest_p.h"
#include "redactroommessagerequest.h"

namespace QtAws {
namespace Chime {

class RedactRoomMessageRequest;

class RedactRoomMessageRequestPrivate : public ChimeRequestPrivate {

public:
    RedactRoomMessageRequestPrivate(const ChimeRequest::Action action,
                                   RedactRoomMessageRequest * const q);
    RedactRoomMessageRequestPrivate(const RedactRoomMessageRequestPrivate &other,
                                   RedactRoomMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(RedactRoomMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
