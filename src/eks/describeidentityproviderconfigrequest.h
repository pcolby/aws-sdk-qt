// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGREQUEST_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DescribeIdentityProviderConfigRequestPrivate;

class QTAWSEKS_EXPORT DescribeIdentityProviderConfigRequest : public EksRequest {

public:
    DescribeIdentityProviderConfigRequest(const DescribeIdentityProviderConfigRequest &other);
    DescribeIdentityProviderConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityProviderConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
