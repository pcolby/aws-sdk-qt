// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEHEALTHCHECKREQUEST_P_H
#define QTAWS_ASSOCIATEHEALTHCHECKREQUEST_P_H

#include "shieldrequest_p.h"
#include "associatehealthcheckrequest.h"

namespace QtAws {
namespace Shield {

class AssociateHealthCheckRequest;

class AssociateHealthCheckRequestPrivate : public ShieldRequestPrivate {

public:
    AssociateHealthCheckRequestPrivate(const ShieldRequest::Action action,
                                   AssociateHealthCheckRequest * const q);
    AssociateHealthCheckRequestPrivate(const AssociateHealthCheckRequestPrivate &other,
                                   AssociateHealthCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateHealthCheckRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
