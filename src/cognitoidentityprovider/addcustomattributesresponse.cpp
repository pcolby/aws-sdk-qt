// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addcustomattributesresponse.h"
#include "addcustomattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AddCustomAttributesResponse
 * \brief The AddCustomAttributesResponse class provides an interace for CognitoIdentityProvider AddCustomAttributes responses.
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
 * \sa CognitoIdentityProviderClient::addCustomAttributes
 */

/*!
 * Constructs a AddCustomAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
AddCustomAttributesResponse::AddCustomAttributesResponse(
        const AddCustomAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AddCustomAttributesResponsePrivate(this), parent)
{
    setRequest(new AddCustomAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddCustomAttributesRequest * AddCustomAttributesResponse::request() const
{
    Q_D(const AddCustomAttributesResponse);
    return static_cast<const AddCustomAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AddCustomAttributes \a response.
 */
void AddCustomAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddCustomAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AddCustomAttributesResponsePrivate
 * \brief The AddCustomAttributesResponsePrivate class provides private implementation for AddCustomAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AddCustomAttributesResponsePrivate object with public implementation \a q.
 */
AddCustomAttributesResponsePrivate::AddCustomAttributesResponsePrivate(
    AddCustomAttributesResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AddCustomAttributes response element from \a xml.
 */
void AddCustomAttributesResponsePrivate::parseAddCustomAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddCustomAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
