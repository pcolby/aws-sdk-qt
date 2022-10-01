// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECRLREQUEST_P_H
#define QTAWS_DISABLECRLREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "disablecrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableCrlRequest;

class DisableCrlRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    DisableCrlRequestPrivate(const RolesAnywhereRequest::Action action,
                                   DisableCrlRequest * const q);
    DisableCrlRequestPrivate(const DisableCrlRequestPrivate &other,
                                   DisableCrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
