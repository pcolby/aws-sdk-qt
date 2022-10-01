// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINAPPMESSAGESREQUEST_P_H
#define QTAWS_GETINAPPMESSAGESREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getinappmessagesrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetInAppMessagesRequest;

class GetInAppMessagesRequestPrivate : public PinpointRequestPrivate {

public:
    GetInAppMessagesRequestPrivate(const PinpointRequest::Action action,
                                   GetInAppMessagesRequest * const q);
    GetInAppMessagesRequestPrivate(const GetInAppMessagesRequestPrivate &other,
                                   GetInAppMessagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInAppMessagesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
