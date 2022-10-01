// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setriskconfigurationresponse.h"
#include "setriskconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetRiskConfigurationResponse
 * \brief The SetRiskConfigurationResponse class provides an interace for CognitoIdentityProvider SetRiskConfiguration responses.
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
 * \sa CognitoIdentityProviderClient::setRiskConfiguration
 */

/*!
 * Constructs a SetRiskConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
SetRiskConfigurationResponse::SetRiskConfigurationResponse(
        const SetRiskConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetRiskConfigurationResponsePrivate(this), parent)
{
    setRequest(new SetRiskConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetRiskConfigurationRequest * SetRiskConfigurationResponse::request() const
{
    Q_D(const SetRiskConfigurationResponse);
    return static_cast<const SetRiskConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SetRiskConfiguration \a response.
 */
void SetRiskConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetRiskConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetRiskConfigurationResponsePrivate
 * \brief The SetRiskConfigurationResponsePrivate class provides private implementation for SetRiskConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetRiskConfigurationResponsePrivate object with public implementation \a q.
 */
SetRiskConfigurationResponsePrivate::SetRiskConfigurationResponsePrivate(
    SetRiskConfigurationResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SetRiskConfiguration response element from \a xml.
 */
void SetRiskConfigurationResponsePrivate::parseSetRiskConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetRiskConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
