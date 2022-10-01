// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTANCHORREQUEST_P_H
#define QTAWS_GETTRUSTANCHORREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "gettrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetTrustAnchorRequest;

class GetTrustAnchorRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    GetTrustAnchorRequestPrivate(const RolesAnywhereRequest::Action action,
                                   GetTrustAnchorRequest * const q);
    GetTrustAnchorRequestPrivate(const GetTrustAnchorRequestPrivate &other,
                                   GetTrustAnchorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
