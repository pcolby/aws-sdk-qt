// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLDOMAINRESPONSE_P_H
#define QTAWS_DESCRIBEUSERPOOLDOMAINRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolDomainResponse;

class DescribeUserPoolDomainResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DescribeUserPoolDomainResponsePrivate(DescribeUserPoolDomainResponse * const q);

    void parseDescribeUserPoolDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserPoolDomainResponse)
    Q_DISABLE_COPY(DescribeUserPoolDomainResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
