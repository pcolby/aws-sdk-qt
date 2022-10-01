// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERISKCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBERISKCONFIGURATIONREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "describeriskconfigurationrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeRiskConfigurationRequest;

class DescribeRiskConfigurationRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DescribeRiskConfigurationRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DescribeRiskConfigurationRequest * const q);
    DescribeRiskConfigurationRequestPrivate(const DescribeRiskConfigurationRequestPrivate &other,
                                   DescribeRiskConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRiskConfigurationRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
