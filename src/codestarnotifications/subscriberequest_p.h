// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBEREQUEST_P_H
#define QTAWS_SUBSCRIBEREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "subscriberequest.h"

namespace QtAws {
namespace CodestarNotifications {

class SubscribeRequest;

class SubscribeRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    SubscribeRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   SubscribeRequest * const q);
    SubscribeRequestPrivate(const SubscribeRequestPrivate &other,
                                   SubscribeRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubscribeRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
