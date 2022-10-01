// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOOLREQUEST_P_H
#define QTAWS_CREATEPOOLREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "createpoolrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreatePoolRequest;

class CreatePoolRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    CreatePoolRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   CreatePoolRequest * const q);
    CreatePoolRequestPrivate(const CreatePoolRequestPrivate &other,
                                   CreatePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePoolRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
