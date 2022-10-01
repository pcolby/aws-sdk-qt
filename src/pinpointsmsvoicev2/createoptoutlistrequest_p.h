// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPTOUTLISTREQUEST_P_H
#define QTAWS_CREATEOPTOUTLISTREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "createoptoutlistrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateOptOutListRequest;

class CreateOptOutListRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    CreateOptOutListRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   CreateOptOutListRequest * const q);
    CreateOptOutListRequestPrivate(const CreateOptOutListRequestPrivate &other,
                                   CreateOptOutListRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOptOutListRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
