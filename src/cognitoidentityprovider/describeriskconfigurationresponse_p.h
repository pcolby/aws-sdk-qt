// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERISKCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBERISKCONFIGURATIONRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeRiskConfigurationResponse;

class DescribeRiskConfigurationResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DescribeRiskConfigurationResponsePrivate(DescribeRiskConfigurationResponse * const q);

    void parseDescribeRiskConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRiskConfigurationResponse)
    Q_DISABLE_COPY(DescribeRiskConfigurationResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
