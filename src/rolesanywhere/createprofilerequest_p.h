// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILEREQUEST_P_H
#define QTAWS_CREATEPROFILEREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "createprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class CreateProfileRequest;

class CreateProfileRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    CreateProfileRequestPrivate(const RolesAnywhereRequest::Action action,
                                   CreateProfileRequest * const q);
    CreateProfileRequestPrivate(const CreateProfileRequestPrivate &other,
                                   CreateProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
