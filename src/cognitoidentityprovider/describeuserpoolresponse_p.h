// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLRESPONSE_P_H
#define QTAWS_DESCRIBEUSERPOOLRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolResponse;

class DescribeUserPoolResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DescribeUserPoolResponsePrivate(DescribeUserPoolResponse * const q);

    void parseDescribeUserPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserPoolResponse)
    Q_DISABLE_COPY(DescribeUserPoolResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
