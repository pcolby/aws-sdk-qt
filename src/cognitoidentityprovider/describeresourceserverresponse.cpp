/*
    Copyright 2013-2021 Paul Colby

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

#include "describeresourceserverresponse.h"
#include "describeresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeResourceServerResponse
 * \brief The DescribeResourceServerResponse class provides an interace for CognitoIdentityProvider DescribeResourceServer responses.
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
 * \sa CognitoIdentityProviderClient::describeResourceServer
 */

/*!
 * Constructs a DescribeResourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResourceServerResponse::DescribeResourceServerResponse(
        const DescribeResourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeResourceServerResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeResourceServerRequest * DescribeResourceServerResponse::request() const
{
    Q_D(const DescribeResourceServerResponse);
    return static_cast<const DescribeResourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DescribeResourceServer \a response.
 */
void DescribeResourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeResourceServerResponsePrivate
 * \brief The DescribeResourceServerResponsePrivate class provides private implementation for DescribeResourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeResourceServerResponsePrivate object with public implementation \a q.
 */
DescribeResourceServerResponsePrivate::DescribeResourceServerResponsePrivate(
    DescribeResourceServerResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DescribeResourceServer response element from \a xml.
 */
void DescribeResourceServerResponsePrivate::parseDescribeResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
