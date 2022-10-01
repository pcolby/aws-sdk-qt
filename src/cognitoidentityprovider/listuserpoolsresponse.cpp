// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuserpoolsresponse.h"
#include "listuserpoolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolsResponse
 * \brief The ListUserPoolsResponse class provides an interace for CognitoIdentityProvider ListUserPools responses.
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
 * \sa CognitoIdentityProviderClient::listUserPools
 */

/*!
 * Constructs a ListUserPoolsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserPoolsResponse::ListUserPoolsResponse(
        const ListUserPoolsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUserPoolsResponsePrivate(this), parent)
{
    setRequest(new ListUserPoolsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserPoolsRequest * ListUserPoolsResponse::request() const
{
    Q_D(const ListUserPoolsResponse);
    return static_cast<const ListUserPoolsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ListUserPools \a response.
 */
void ListUserPoolsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserPoolsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolsResponsePrivate
 * \brief The ListUserPoolsResponsePrivate class provides private implementation for ListUserPoolsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListUserPoolsResponsePrivate object with public implementation \a q.
 */
ListUserPoolsResponsePrivate::ListUserPoolsResponsePrivate(
    ListUserPoolsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ListUserPools response element from \a xml.
 */
void ListUserPoolsResponsePrivate::parseListUserPoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserPoolsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
