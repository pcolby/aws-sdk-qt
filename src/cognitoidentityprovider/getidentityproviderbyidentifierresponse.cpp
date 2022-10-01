// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentityproviderbyidentifierresponse.h"
#include "getidentityproviderbyidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetIdentityProviderByIdentifierResponse
 * \brief The GetIdentityProviderByIdentifierResponse class provides an interace for CognitoIdentityProvider GetIdentityProviderByIdentifier responses.
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
 * \sa CognitoIdentityProviderClient::getIdentityProviderByIdentifier
 */

/*!
 * Constructs a GetIdentityProviderByIdentifierResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityProviderByIdentifierResponse::GetIdentityProviderByIdentifierResponse(
        const GetIdentityProviderByIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetIdentityProviderByIdentifierResponsePrivate(this), parent)
{
    setRequest(new GetIdentityProviderByIdentifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityProviderByIdentifierRequest * GetIdentityProviderByIdentifierResponse::request() const
{
    Q_D(const GetIdentityProviderByIdentifierResponse);
    return static_cast<const GetIdentityProviderByIdentifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetIdentityProviderByIdentifier \a response.
 */
void GetIdentityProviderByIdentifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityProviderByIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetIdentityProviderByIdentifierResponsePrivate
 * \brief The GetIdentityProviderByIdentifierResponsePrivate class provides private implementation for GetIdentityProviderByIdentifierResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetIdentityProviderByIdentifierResponsePrivate object with public implementation \a q.
 */
GetIdentityProviderByIdentifierResponsePrivate::GetIdentityProviderByIdentifierResponsePrivate(
    GetIdentityProviderByIdentifierResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetIdentityProviderByIdentifier response element from \a xml.
 */
void GetIdentityProviderByIdentifierResponsePrivate::parseGetIdentityProviderByIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityProviderByIdentifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
