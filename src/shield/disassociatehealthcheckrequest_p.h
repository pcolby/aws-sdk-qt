// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEHEALTHCHECKREQUEST_P_H
#define QTAWS_DISASSOCIATEHEALTHCHECKREQUEST_P_H

#include "shieldrequest_p.h"
#include "disassociatehealthcheckrequest.h"

namespace QtAws {
namespace Shield {

class DisassociateHealthCheckRequest;

class DisassociateHealthCheckRequestPrivate : public ShieldRequestPrivate {

public:
    DisassociateHealthCheckRequestPrivate(const ShieldRequest::Action action,
                                   DisassociateHealthCheckRequest * const q);
    DisassociateHealthCheckRequestPrivate(const DisassociateHealthCheckRequestPrivate &other,
                                   DisassociateHealthCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateHealthCheckRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
