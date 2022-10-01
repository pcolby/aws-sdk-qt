// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTNOTIFICATIONCHANNELREQUEST_P_H
#define QTAWS_PUTNOTIFICATIONCHANNELREQUEST_P_H

#include "fmsrequest_p.h"
#include "putnotificationchannelrequest.h"

namespace QtAws {
namespace Fms {

class PutNotificationChannelRequest;

class PutNotificationChannelRequestPrivate : public FmsRequestPrivate {

public:
    PutNotificationChannelRequestPrivate(const FmsRequest::Action action,
                                   PutNotificationChannelRequest * const q);
    PutNotificationChannelRequestPrivate(const PutNotificationChannelRequestPrivate &other,
                                   PutNotificationChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutNotificationChannelRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
