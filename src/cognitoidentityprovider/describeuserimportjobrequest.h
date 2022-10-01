// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERIMPORTJOBREQUEST_H
#define QTAWS_DESCRIBEUSERIMPORTJOBREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserImportJobRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeUserImportJobRequest : public CognitoIdentityProviderRequest {

public:
    DescribeUserImportJobRequest(const DescribeUserImportJobRequest &other);
    DescribeUserImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
