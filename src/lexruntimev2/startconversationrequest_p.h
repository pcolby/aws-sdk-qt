// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONVERSATIONREQUEST_P_H
#define QTAWS_STARTCONVERSATIONREQUEST_P_H

#include "lexruntimev2request_p.h"
#include "startconversationrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class StartConversationRequest;

class StartConversationRequestPrivate : public LexRuntimeV2RequestPrivate {

public:
    StartConversationRequestPrivate(const LexRuntimeV2Request::Action action,
                                   StartConversationRequest * const q);
    StartConversationRequestPrivate(const StartConversationRequestPrivate &other,
                                   StartConversationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartConversationRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
