// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPROFILEREQUEST_P_H
#define QTAWS_ENABLEPROFILEREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "enableprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableProfileRequest;

class EnableProfileRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    EnableProfileRequestPrivate(const RolesAnywhereRequest::Action action,
                                   EnableProfileRequest * const q);
    EnableProfileRequestPrivate(const EnableProfileRequestPrivate &other,
                                   EnableProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
