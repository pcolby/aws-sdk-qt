// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeriskconfigurationresponse.h"
#include "describeriskconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeRiskConfigurationResponse
 * \brief The DescribeRiskConfigurationResponse class provides an interace for CognitoIdentityProvider DescribeRiskConfiguration responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::describeRiskConfiguration
 */

/*!
 * Constructs a DescribeRiskConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRiskConfigurationResponse::DescribeRiskConfigurationResponse(
        const DescribeRiskConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeRiskConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeRiskConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRiskConfigurationRequest * DescribeRiskConfigurationResponse::request() const
{
    Q_D(const DescribeRiskConfigurationResponse);
    return static_cast<const DescribeRiskConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DescribeRiskConfiguration \a response.
 */
void DescribeRiskConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRiskConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeRiskConfigurationResponsePrivate
 * \brief The DescribeRiskConfigurationResponsePrivate class provides private implementation for DescribeRiskConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeRiskConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeRiskConfigurationResponsePrivate::DescribeRiskConfigurationResponsePrivate(
    DescribeRiskConfigurationResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DescribeRiskConfiguration response element from \a xml.
 */
void DescribeRiskConfigurationResponsePrivate::parseDescribeRiskConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRiskConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
