// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONREQUEST_P_H
#define QTAWS_CREATEORGANIZATIONREQUEST_P_H

#include "organizationsrequest_p.h"
#include "createorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class CreateOrganizationRequest;

class CreateOrganizationRequestPrivate : public OrganizationsRequestPrivate {

public:
    CreateOrganizationRequestPrivate(const OrganizationsRequest::Action action,
                                   CreateOrganizationRequest * const q);
    CreateOrganizationRequestPrivate(const CreateOrganizationRequestPrivate &other,
                                   CreateOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
