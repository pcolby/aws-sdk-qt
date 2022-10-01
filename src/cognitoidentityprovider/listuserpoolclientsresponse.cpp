// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuserpoolclientsresponse.h"
#include "listuserpoolclientsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolClientsResponse
 * \brief The ListUserPoolClientsResponse class provides an interace for CognitoIdentityProvider ListUserPoolClients responses.
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
 * \sa CognitoIdentityProviderClient::listUserPoolClients
 */

/*!
 * Constructs a ListUserPoolClientsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserPoolClientsResponse::ListUserPoolClientsResponse(
        const ListUserPoolClientsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUserPoolClientsResponsePrivate(this), parent)
{
    setRequest(new ListUserPoolClientsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserPoolClientsRequest * ListUserPoolClientsResponse::request() const
{
    Q_D(const ListUserPoolClientsResponse);
    return static_cast<const ListUserPoolClientsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ListUserPoolClients \a response.
 */
void ListUserPoolClientsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserPoolClientsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolClientsResponsePrivate
 * \brief The ListUserPoolClientsResponsePrivate class provides private implementation for ListUserPoolClientsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListUserPoolClientsResponsePrivate object with public implementation \a q.
 */
ListUserPoolClientsResponsePrivate::ListUserPoolClientsResponsePrivate(
    ListUserPoolClientsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ListUserPoolClients response element from \a xml.
 */
void ListUserPoolClientsResponsePrivate::parseListUserPoolClientsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserPoolClientsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
