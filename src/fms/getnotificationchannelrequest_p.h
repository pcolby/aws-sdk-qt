// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNOTIFICATIONCHANNELREQUEST_P_H
#define QTAWS_GETNOTIFICATIONCHANNELREQUEST_P_H

#include "fmsrequest_p.h"
#include "getnotificationchannelrequest.h"

namespace QtAws {
namespace Fms {

class GetNotificationChannelRequest;

class GetNotificationChannelRequestPrivate : public FmsRequestPrivate {

public:
    GetNotificationChannelRequestPrivate(const FmsRequest::Action action,
                                   GetNotificationChannelRequest * const q);
    GetNotificationChannelRequestPrivate(const GetNotificationChannelRequestPrivate &other,
                                   GetNotificationChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNotificationChannelRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
