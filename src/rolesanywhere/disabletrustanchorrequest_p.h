// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETRUSTANCHORREQUEST_P_H
#define QTAWS_DISABLETRUSTANCHORREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "disabletrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableTrustAnchorRequest;

class DisableTrustAnchorRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    DisableTrustAnchorRequestPrivate(const RolesAnywhereRequest::Action action,
                                   DisableTrustAnchorRequest * const q);
    DisableTrustAnchorRequestPrivate(const DisableTrustAnchorRequestPrivate &other,
                                   DisableTrustAnchorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
