// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKEYWORDREQUEST_P_H
#define QTAWS_PUTKEYWORDREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "putkeywordrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PutKeywordRequest;

class PutKeywordRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    PutKeywordRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   PutKeywordRequest * const q);
    PutKeywordRequestPrivate(const PutKeywordRequestPrivate &other,
                                   PutKeywordRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutKeywordRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
