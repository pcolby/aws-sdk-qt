// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCONVERSATIONMESSAGEREQUEST_P_H
#define QTAWS_REDACTCONVERSATIONMESSAGEREQUEST_P_H

#include "chimerequest_p.h"
#include "redactconversationmessagerequest.h"

namespace QtAws {
namespace Chime {

class RedactConversationMessageRequest;

class RedactConversationMessageRequestPrivate : public ChimeRequestPrivate {

public:
    RedactConversationMessageRequestPrivate(const ChimeRequest::Action action,
                                   RedactConversationMessageRequest * const q);
    RedactConversationMessageRequestPrivate(const RedactConversationMessageRequestPrivate &other,
                                   RedactConversationMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(RedactConversationMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
