// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATESUBSCRIPTIONREQUEST_P_H

#include "shieldrequest_p.h"
#include "createsubscriptionrequest.h"

namespace QtAws {
namespace Shield {

class CreateSubscriptionRequest;

class CreateSubscriptionRequestPrivate : public ShieldRequestPrivate {

public:
    CreateSubscriptionRequestPrivate(const ShieldRequest::Action action,
                                   CreateSubscriptionRequest * const q);
    CreateSubscriptionRequestPrivate(const CreateSubscriptionRequestPrivate &other,
                                   CreateSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSubscriptionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
