// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "describeorganizationrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeOrganizationRequest;

class DescribeOrganizationRequestPrivate : public WorkMailRequestPrivate {

public:
    DescribeOrganizationRequestPrivate(const WorkMailRequest::Action action,
                                   DescribeOrganizationRequest * const q);
    DescribeOrganizationRequestPrivate(const DescribeOrganizationRequestPrivate &other,
                                   DescribeOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
