// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeIdentityProviderResponse;

class DescribeIdentityProviderResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DescribeIdentityProviderResponsePrivate(DescribeIdentityProviderResponse * const q);

    void parseDescribeIdentityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityProviderResponse)
    Q_DISABLE_COPY(DescribeIdentityProviderResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
