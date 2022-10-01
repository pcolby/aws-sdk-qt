// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEFAULTMESSAGETYPEREQUEST_P_H
#define QTAWS_DELETEDEFAULTMESSAGETYPEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deletedefaultmessagetyperequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteDefaultMessageTypeRequest;

class DeleteDefaultMessageTypeRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteDefaultMessageTypeRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteDefaultMessageTypeRequest * const q);
    DeleteDefaultMessageTypeRequestPrivate(const DeleteDefaultMessageTypeRequestPrivate &other,
                                   DeleteDefaultMessageTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDefaultMessageTypeRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
