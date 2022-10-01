// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERISKCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBERISKCONFIGURATIONRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "describeriskconfigurationrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeRiskConfigurationResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeRiskConfigurationResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DescribeRiskConfigurationResponse(const DescribeRiskConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRiskConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRiskConfigurationResponse)
    Q_DISABLE_COPY(DescribeRiskConfigurationResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
