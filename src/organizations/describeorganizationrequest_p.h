// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONREQUEST_P_H

#include "organizationsrequest_p.h"
#include "describeorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeOrganizationRequest;

class DescribeOrganizationRequestPrivate : public OrganizationsRequestPrivate {

public:
    DescribeOrganizationRequestPrivate(const OrganizationsRequest::Action action,
                                   DescribeOrganizationRequest * const q);
    DescribeOrganizationRequestPrivate(const DescribeOrganizationRequestPrivate &other,
                                   DescribeOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
