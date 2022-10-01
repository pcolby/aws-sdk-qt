// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTANCHORSREQUEST_P_H
#define QTAWS_LISTTRUSTANCHORSREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "listtrustanchorsrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListTrustAnchorsRequest;

class ListTrustAnchorsRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    ListTrustAnchorsRequestPrivate(const RolesAnywhereRequest::Action action,
                                   ListTrustAnchorsRequest * const q);
    ListTrustAnchorsRequestPrivate(const ListTrustAnchorsRequestPrivate &other,
                                   ListTrustAnchorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrustAnchorsRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
