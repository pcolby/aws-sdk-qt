// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONALUNITREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONALUNITREQUEST_P_H

#include "organizationsrequest_p.h"
#include "describeorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeOrganizationalUnitRequest;

class DescribeOrganizationalUnitRequestPrivate : public OrganizationsRequestPrivate {

public:
    DescribeOrganizationalUnitRequestPrivate(const OrganizationsRequest::Action action,
                                   DescribeOrganizationalUnitRequest * const q);
    DescribeOrganizationalUnitRequestPrivate(const DescribeOrganizationalUnitRequestPrivate &other,
                                   DescribeOrganizationalUnitRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationalUnitRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
