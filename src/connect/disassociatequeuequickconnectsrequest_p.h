// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEQUEUEQUICKCONNECTSREQUEST_P_H
#define QTAWS_DISASSOCIATEQUEUEQUICKCONNECTSREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociatequeuequickconnectsrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateQueueQuickConnectsRequest;

class DisassociateQueueQuickConnectsRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociateQueueQuickConnectsRequestPrivate(const ConnectRequest::Action action,
                                   DisassociateQueueQuickConnectsRequest * const q);
    DisassociateQueueQuickConnectsRequestPrivate(const DisassociateQueueQuickConnectsRequestPrivate &other,
                                   DisassociateQueueQuickConnectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateQueueQuickConnectsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
