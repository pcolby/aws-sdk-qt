// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOPTEDOUTNUMBERREQUEST_P_H
#define QTAWS_PUTOPTEDOUTNUMBERREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "putoptedoutnumberrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PutOptedOutNumberRequest;

class PutOptedOutNumberRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    PutOptedOutNumberRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   PutOptedOutNumberRequest * const q);
    PutOptedOutNumberRequestPrivate(const PutOptedOutNumberRequestPrivate &other,
                                   PutOptedOutNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutOptedOutNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
