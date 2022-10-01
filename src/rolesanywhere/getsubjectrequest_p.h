// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBJECTREQUEST_P_H
#define QTAWS_GETSUBJECTREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "getsubjectrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetSubjectRequest;

class GetSubjectRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    GetSubjectRequestPrivate(const RolesAnywhereRequest::Action action,
                                   GetSubjectRequest * const q);
    GetSubjectRequestPrivate(const GetSubjectRequestPrivate &other,
                                   GetSubjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSubjectRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
