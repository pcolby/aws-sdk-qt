// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONALUNITREQUEST_P_H
#define QTAWS_UPDATEORGANIZATIONALUNITREQUEST_P_H

#include "organizationsrequest_p.h"
#include "updateorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class UpdateOrganizationalUnitRequest;

class UpdateOrganizationalUnitRequestPrivate : public OrganizationsRequestPrivate {

public:
    UpdateOrganizationalUnitRequestPrivate(const OrganizationsRequest::Action action,
                                   UpdateOrganizationalUnitRequest * const q);
    UpdateOrganizationalUnitRequestPrivate(const UpdateOrganizationalUnitRequestPrivate &other,
                                   UpdateOrganizationalUnitRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOrganizationalUnitRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
