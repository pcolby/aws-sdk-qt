// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERIMPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEUSERIMPORTJOBREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "describeuserimportjobrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserImportJobRequest;

class DescribeUserImportJobRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DescribeUserImportJobRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DescribeUserImportJobRequest * const q);
    DescribeUserImportJobRequestPrivate(const DescribeUserImportJobRequestPrivate &other,
                                   DescribeUserImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
