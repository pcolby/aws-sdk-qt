// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETESUBSCRIPTIONREQUEST_P_H

#include "shieldrequest_p.h"
#include "deletesubscriptionrequest.h"

namespace QtAws {
namespace Shield {

class DeleteSubscriptionRequest;

class DeleteSubscriptionRequestPrivate : public ShieldRequestPrivate {

public:
    DeleteSubscriptionRequestPrivate(const ShieldRequest::Action action,
                                   DeleteSubscriptionRequest * const q);
    DeleteSubscriptionRequestPrivate(const DeleteSubscriptionRequestPrivate &other,
                                   DeleteSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSubscriptionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
