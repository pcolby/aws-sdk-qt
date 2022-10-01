// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGREQUEST_P_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGREQUEST_P_H

#include "eksrequest_p.h"
#include "describeidentityproviderconfigrequest.h"

namespace QtAws {
namespace Eks {

class DescribeIdentityProviderConfigRequest;

class DescribeIdentityProviderConfigRequestPrivate : public EksRequestPrivate {

public:
    DescribeIdentityProviderConfigRequestPrivate(const EksRequest::Action action,
                                   DescribeIdentityProviderConfigRequest * const q);
    DescribeIdentityProviderConfigRequestPrivate(const DescribeIdentityProviderConfigRequestPrivate &other,
                                   DescribeIdentityProviderConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityProviderConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
