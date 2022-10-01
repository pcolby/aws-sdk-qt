// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONALUNITREQUEST_P_H
#define QTAWS_CREATEORGANIZATIONALUNITREQUEST_P_H

#include "organizationsrequest_p.h"
#include "createorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class CreateOrganizationalUnitRequest;

class CreateOrganizationalUnitRequestPrivate : public OrganizationsRequestPrivate {

public:
    CreateOrganizationalUnitRequestPrivate(const OrganizationsRequest::Action action,
                                   CreateOrganizationalUnitRequest * const q);
    CreateOrganizationalUnitRequestPrivate(const CreateOrganizationalUnitRequestPrivate &other,
                                   CreateOrganizationalUnitRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOrganizationalUnitRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
