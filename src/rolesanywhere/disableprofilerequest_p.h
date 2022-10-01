// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPROFILEREQUEST_P_H
#define QTAWS_DISABLEPROFILEREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "disableprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableProfileRequest;

class DisableProfileRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    DisableProfileRequestPrivate(const RolesAnywhereRequest::Action action,
                                   DisableProfileRequest * const q);
    DisableProfileRequestPrivate(const DisableProfileRequestPrivate &other,
                                   DisableProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
