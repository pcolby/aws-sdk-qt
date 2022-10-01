// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCESERVERRESPONSE_P_H
#define QTAWS_DESCRIBERESOURCESERVERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeResourceServerResponse;

class DescribeResourceServerResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DescribeResourceServerResponsePrivate(DescribeResourceServerResponse * const q);

    void parseDescribeResourceServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourceServerResponse)
    Q_DISABLE_COPY(DescribeResourceServerResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
