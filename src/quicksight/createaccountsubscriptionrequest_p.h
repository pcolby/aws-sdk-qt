// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATEACCOUNTSUBSCRIPTIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createaccountsubscriptionrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateAccountSubscriptionRequest;

class CreateAccountSubscriptionRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateAccountSubscriptionRequestPrivate(const QuickSightRequest::Action action,
                                   CreateAccountSubscriptionRequest * const q);
    CreateAccountSubscriptionRequestPrivate(const CreateAccountSubscriptionRequestPrivate &other,
                                   CreateAccountSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccountSubscriptionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
