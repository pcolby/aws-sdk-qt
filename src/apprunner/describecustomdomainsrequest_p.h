// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMDOMAINSREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMDOMAINSREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "describecustomdomainsrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeCustomDomainsRequest;

class DescribeCustomDomainsRequestPrivate : public AppRunnerRequestPrivate {

public:
    DescribeCustomDomainsRequestPrivate(const AppRunnerRequest::Action action,
                                   DescribeCustomDomainsRequest * const q);
    DescribeCustomDomainsRequestPrivate(const DescribeCustomDomainsRequestPrivate &other,
                                   DescribeCustomDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomDomainsRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
