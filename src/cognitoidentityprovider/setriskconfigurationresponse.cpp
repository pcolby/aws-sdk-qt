/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
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
    Q_D(SetRiskConfigurationResponse);
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
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
