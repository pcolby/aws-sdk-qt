// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATEEVENTSUBSCRIPTIONREQUEST_P_H

#include "neptunerequest_p.h"
#include "createeventsubscriptionrequest.h"

namespace QtAws {
namespace Neptune {

class CreateEventSubscriptionRequest;

class CreateEventSubscriptionRequestPrivate : public NeptuneRequestPrivate {

public:
    CreateEventSubscriptionRequestPrivate(const NeptuneRequest::Action action,
                                   CreateEventSubscriptionRequest * const q);
    CreateEventSubscriptionRequestPrivate(const CreateEventSubscriptionRequestPrivate &other,
                                   CreateEventSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEventSubscriptionRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
