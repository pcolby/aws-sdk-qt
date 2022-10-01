// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONSTATEREQUEST_P_H
#define QTAWS_GETSUBSCRIPTIONSTATEREQUEST_P_H

#include "shieldrequest_p.h"
#include "getsubscriptionstaterequest.h"

namespace QtAws {
namespace Shield {

class GetSubscriptionStateRequest;

class GetSubscriptionStateRequestPrivate : public ShieldRequestPrivate {

public:
    GetSubscriptionStateRequestPrivate(const ShieldRequest::Action action,
                                   GetSubscriptionStateRequest * const q);
    GetSubscriptionStateRequestPrivate(const GetSubscriptionStateRequestPrivate &other,
                                   GetSubscriptionStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSubscriptionStateRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
