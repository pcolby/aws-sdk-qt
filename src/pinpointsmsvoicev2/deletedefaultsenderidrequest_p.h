// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEFAULTSENDERIDREQUEST_P_H
#define QTAWS_DELETEDEFAULTSENDERIDREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deletedefaultsenderidrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteDefaultSenderIdRequest;

class DeleteDefaultSenderIdRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteDefaultSenderIdRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteDefaultSenderIdRequest * const q);
    DeleteDefaultSenderIdRequestPrivate(const DeleteDefaultSenderIdRequestPrivate &other,
                                   DeleteDefaultSenderIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDefaultSenderIdRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
