// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONREQUEST_P_H
#define QTAWS_DELETEORGANIZATIONREQUEST_P_H

#include "organizationsrequest_p.h"
#include "deleteorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class DeleteOrganizationRequest;

class DeleteOrganizationRequestPrivate : public OrganizationsRequestPrivate {

public:
    DeleteOrganizationRequestPrivate(const OrganizationsRequest::Action action,
                                   DeleteOrganizationRequest * const q);
    DeleteOrganizationRequestPrivate(const DeleteOrganizationRequestPrivate &other,
                                   DeleteOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
