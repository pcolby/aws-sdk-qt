// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CONFIRMSUBSCRIPTIONREQUEST_P_H

#include "snsrequest_p.h"
#include "confirmsubscriptionrequest.h"

namespace QtAws {
namespace Sns {

class ConfirmSubscriptionRequest;

class ConfirmSubscriptionRequestPrivate : public SnsRequestPrivate {

public:
    ConfirmSubscriptionRequestPrivate(const SnsRequest::Action action,
                                   ConfirmSubscriptionRequest * const q);
    ConfirmSubscriptionRequestPrivate(const ConfirmSubscriptionRequestPrivate &other,
                                   ConfirmSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmSubscriptionRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
