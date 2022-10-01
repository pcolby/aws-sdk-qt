// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "describeidentityproviderconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeIdentityProviderConfigurationRequest;

class DescribeIdentityProviderConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    DescribeIdentityProviderConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   DescribeIdentityProviderConfigurationRequest * const q);
    DescribeIdentityProviderConfigurationRequestPrivate(const DescribeIdentityProviderConfigurationRequestPrivate &other,
                                   DescribeIdentityProviderConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityProviderConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
