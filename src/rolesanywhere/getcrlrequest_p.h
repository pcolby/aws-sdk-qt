// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRLREQUEST_P_H
#define QTAWS_GETCRLREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "getcrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetCrlRequest;

class GetCrlRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    GetCrlRequestPrivate(const RolesAnywhereRequest::Action action,
                                   GetCrlRequest * const q);
    GetCrlRequestPrivate(const GetCrlRequestPrivate &other,
                                   GetCrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
