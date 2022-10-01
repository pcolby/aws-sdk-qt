// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEVENTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_MODIFYEVENTSUBSCRIPTIONREQUEST_P_H

#include "neptunerequest_p.h"
#include "modifyeventsubscriptionrequest.h"

namespace QtAws {
namespace Neptune {

class ModifyEventSubscriptionRequest;

class ModifyEventSubscriptionRequestPrivate : public NeptuneRequestPrivate {

public:
    ModifyEventSubscriptionRequestPrivate(const NeptuneRequest::Action action,
                                   ModifyEventSubscriptionRequest * const q);
    ModifyEventSubscriptionRequestPrivate(const ModifyEventSubscriptionRequestPrivate &other,
                                   ModifyEventSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyEventSubscriptionRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
