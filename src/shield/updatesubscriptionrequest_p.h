// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONREQUEST_P_H
#define QTAWS_UPDATESUBSCRIPTIONREQUEST_P_H

#include "shieldrequest_p.h"
#include "updatesubscriptionrequest.h"

namespace QtAws {
namespace Shield {

class UpdateSubscriptionRequest;

class UpdateSubscriptionRequestPrivate : public ShieldRequestPrivate {

public:
    UpdateSubscriptionRequestPrivate(const ShieldRequest::Action action,
                                   UpdateSubscriptionRequest * const q);
    UpdateSubscriptionRequestPrivate(const UpdateSubscriptionRequestPrivate &other,
                                   UpdateSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSubscriptionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
