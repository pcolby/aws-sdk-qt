// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCHANNELMESSAGEREQUEST_P_H
#define QTAWS_REDACTCHANNELMESSAGEREQUEST_P_H

#include "chimerequest_p.h"
#include "redactchannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class RedactChannelMessageRequest;

class RedactChannelMessageRequestPrivate : public ChimeRequestPrivate {

public:
    RedactChannelMessageRequestPrivate(const ChimeRequest::Action action,
                                   RedactChannelMessageRequest * const q);
    RedactChannelMessageRequestPrivate(const RedactChannelMessageRequestPrivate &other,
                                   RedactChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(RedactChannelMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
