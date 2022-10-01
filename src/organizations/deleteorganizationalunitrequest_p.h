// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONALUNITREQUEST_P_H
#define QTAWS_DELETEORGANIZATIONALUNITREQUEST_P_H

#include "organizationsrequest_p.h"
#include "deleteorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class DeleteOrganizationalUnitRequest;

class DeleteOrganizationalUnitRequestPrivate : public OrganizationsRequestPrivate {

public:
    DeleteOrganizationalUnitRequestPrivate(const OrganizationsRequest::Action action,
                                   DeleteOrganizationalUnitRequest * const q);
    DeleteOrganizationalUnitRequestPrivate(const DeleteOrganizationalUnitRequestPrivate &other,
                                   DeleteOrganizationalUnitRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationalUnitRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
