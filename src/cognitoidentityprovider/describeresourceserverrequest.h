// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCESERVERREQUEST_H
#define QTAWS_DESCRIBERESOURCESERVERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeResourceServerRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeResourceServerRequest : public CognitoIdentityProviderRequest {

public:
    DescribeResourceServerRequest(const DescribeResourceServerRequest &other);
    DescribeResourceServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourceServerRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
