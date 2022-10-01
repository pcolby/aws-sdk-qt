// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEREQUEST_P_H
#define QTAWS_GETPROFILEREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "getprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetProfileRequest;

class GetProfileRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    GetProfileRequestPrivate(const RolesAnywhereRequest::Action action,
                                   GetProfileRequest * const q);
    GetProfileRequestPrivate(const GetProfileRequestPrivate &other,
                                   GetProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
