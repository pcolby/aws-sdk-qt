// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCHANNELMESSAGEREQUEST_P_H
#define QTAWS_SENDCHANNELMESSAGEREQUEST_P_H

#include "chimerequest_p.h"
#include "sendchannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class SendChannelMessageRequest;

class SendChannelMessageRequestPrivate : public ChimeRequestPrivate {

public:
    SendChannelMessageRequestPrivate(const ChimeRequest::Action action,
                                   SendChannelMessageRequest * const q);
    SendChannelMessageRequestPrivate(const SendChannelMessageRequestPrivate &other,
                                   SendChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendChannelMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
