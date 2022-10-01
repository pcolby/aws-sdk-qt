// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLREQUEST_H
#define QTAWS_DESCRIBEUSERPOOLREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeUserPoolRequest : public CognitoIdentityProviderRequest {

public:
    DescribeUserPoolRequest(const DescribeUserPoolRequest &other);
    DescribeUserPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserPoolRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
