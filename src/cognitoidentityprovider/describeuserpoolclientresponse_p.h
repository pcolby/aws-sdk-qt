// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLCLIENTRESPONSE_P_H
#define QTAWS_DESCRIBEUSERPOOLCLIENTRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolClientResponse;

class DescribeUserPoolClientResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DescribeUserPoolClientResponsePrivate(DescribeUserPoolClientResponse * const q);

    void parseDescribeUserPoolClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserPoolClientResponse)
    Q_DISABLE_COPY(DescribeUserPoolClientResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
