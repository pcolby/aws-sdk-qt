// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERREQUEST_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeIdentityProviderRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeIdentityProviderRequest : public CognitoIdentityProviderRequest {

public:
    DescribeIdentityProviderRequest(const DescribeIdentityProviderRequest &other);
    DescribeIdentityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityProviderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
