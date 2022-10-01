// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRLREQUEST_P_H
#define QTAWS_UPDATECRLREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "updatecrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateCrlRequest;

class UpdateCrlRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    UpdateCrlRequestPrivate(const RolesAnywhereRequest::Action action,
                                   UpdateCrlRequest * const q);
    UpdateCrlRequestPrivate(const UpdateCrlRequestPrivate &other,
                                   UpdateCrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
