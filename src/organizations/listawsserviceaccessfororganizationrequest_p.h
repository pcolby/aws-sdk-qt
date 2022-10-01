// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAWSSERVICEACCESSFORORGANIZATIONREQUEST_P_H
#define QTAWS_LISTAWSSERVICEACCESSFORORGANIZATIONREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listawsserviceaccessfororganizationrequest.h"

namespace QtAws {
namespace Organizations {

class ListAWSServiceAccessForOrganizationRequest;

class ListAWSServiceAccessForOrganizationRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListAWSServiceAccessForOrganizationRequestPrivate(const OrganizationsRequest::Action action,
                                   ListAWSServiceAccessForOrganizationRequest * const q);
    ListAWSServiceAccessForOrganizationRequestPrivate(const ListAWSServiceAccessForOrganizationRequestPrivate &other,
                                   ListAWSServiceAccessForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAWSServiceAccessForOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
