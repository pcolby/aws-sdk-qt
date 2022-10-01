// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEQUEUEQUICKCONNECTSREQUEST_P_H
#define QTAWS_ASSOCIATEQUEUEQUICKCONNECTSREQUEST_P_H

#include "connectrequest_p.h"
#include "associatequeuequickconnectsrequest.h"

namespace QtAws {
namespace Connect {

class AssociateQueueQuickConnectsRequest;

class AssociateQueueQuickConnectsRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateQueueQuickConnectsRequestPrivate(const ConnectRequest::Action action,
                                   AssociateQueueQuickConnectsRequest * const q);
    AssociateQueueQuickConnectsRequestPrivate(const AssociateQueueQuickConnectsRequestPrivate &other,
                                   AssociateQueueQuickConnectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateQueueQuickConnectsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
