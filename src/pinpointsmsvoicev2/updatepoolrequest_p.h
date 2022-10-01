// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOOLREQUEST_P_H
#define QTAWS_UPDATEPOOLREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "updatepoolrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdatePoolRequest;

class UpdatePoolRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    UpdatePoolRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   UpdatePoolRequest * const q);
    UpdatePoolRequestPrivate(const UpdatePoolRequestPrivate &other,
                                   UpdatePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePoolRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
