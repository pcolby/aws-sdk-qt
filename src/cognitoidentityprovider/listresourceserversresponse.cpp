// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourceserversresponse.h"
#include "listresourceserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListResourceServersResponse
 * \brief The ListResourceServersResponse class provides an interace for CognitoIdentityProvider ListResourceServers responses.
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
 * \sa CognitoIdentityProviderClient::listResourceServers
 */

/*!
 * Constructs a ListResourceServersResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceServersResponse::ListResourceServersResponse(
        const ListResourceServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListResourceServersResponsePrivate(this), parent)
{
    setRequest(new ListResourceServersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceServersRequest * ListResourceServersResponse::request() const
{
    Q_D(const ListResourceServersResponse);
    return static_cast<const ListResourceServersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ListResourceServers \a response.
 */
void ListResourceServersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListResourceServersResponsePrivate
 * \brief The ListResourceServersResponsePrivate class provides private implementation for ListResourceServersResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListResourceServersResponsePrivate object with public implementation \a q.
 */
ListResourceServersResponsePrivate::ListResourceServersResponsePrivate(
    ListResourceServersResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ListResourceServers response element from \a xml.
 */
void ListResourceServersResponsePrivate::parseListResourceServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceServersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
