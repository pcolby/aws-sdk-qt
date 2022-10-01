// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPOOLREQUEST_H
#define QTAWS_DESCRIBEIDENTITYPOOLREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DescribeIdentityPoolRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT DescribeIdentityPoolRequest : public CognitoIdentityRequest {

public:
    DescribeIdentityPoolRequest(const DescribeIdentityPoolRequest &other);
    DescribeIdentityPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityPoolRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
