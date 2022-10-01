// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONCHANNELREQUEST_P_H
#define QTAWS_DELETENOTIFICATIONCHANNELREQUEST_P_H

#include "fmsrequest_p.h"
#include "deletenotificationchannelrequest.h"

namespace QtAws {
namespace Fms {

class DeleteNotificationChannelRequest;

class DeleteNotificationChannelRequestPrivate : public FmsRequestPrivate {

public:
    DeleteNotificationChannelRequestPrivate(const FmsRequest::Action action,
                                   DeleteNotificationChannelRequest * const q);
    DeleteNotificationChannelRequestPrivate(const DeleteNotificationChannelRequestPrivate &other,
                                   DeleteNotificationChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationChannelRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
