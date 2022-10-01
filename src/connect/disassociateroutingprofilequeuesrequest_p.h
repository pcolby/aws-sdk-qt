// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROUTINGPROFILEQUEUESREQUEST_P_H
#define QTAWS_DISASSOCIATEROUTINGPROFILEQUEUESREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociateroutingprofilequeuesrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateRoutingProfileQueuesRequest;

class DisassociateRoutingProfileQueuesRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociateRoutingProfileQueuesRequestPrivate(const ConnectRequest::Action action,
                                   DisassociateRoutingProfileQueuesRequest * const q);
    DisassociateRoutingProfileQueuesRequestPrivate(const DisassociateRoutingProfileQueuesRequestPrivate &other,
                                   DisassociateRoutingProfileQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateRoutingProfileQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
