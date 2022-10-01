// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECRLREQUEST_P_H
#define QTAWS_ENABLECRLREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "enablecrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableCrlRequest;

class EnableCrlRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    EnableCrlRequestPrivate(const RolesAnywhereRequest::Action action,
                                   EnableCrlRequest * const q);
    EnableCrlRequestPrivate(const EnableCrlRequestPrivate &other,
                                   EnableCrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
