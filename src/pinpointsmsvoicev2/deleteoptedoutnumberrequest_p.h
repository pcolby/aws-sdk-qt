// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTEDOUTNUMBERREQUEST_P_H
#define QTAWS_DELETEOPTEDOUTNUMBERREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deleteoptedoutnumberrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteOptedOutNumberRequest;

class DeleteOptedOutNumberRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteOptedOutNumberRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteOptedOutNumberRequest * const q);
    DeleteOptedOutNumberRequestPrivate(const DeleteOptedOutNumberRequestPrivate &other,
                                   DeleteOptedOutNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOptedOutNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
