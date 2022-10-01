// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminlistuserautheventsresponse.h"
#include "adminlistuserautheventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListUserAuthEventsResponse
 * \brief The AdminListUserAuthEventsResponse class provides an interace for CognitoIdentityProvider AdminListUserAuthEvents responses.
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
 * \sa CognitoIdentityProviderClient::adminListUserAuthEvents
 */

/*!
 * Constructs a AdminListUserAuthEventsResponse object for \a reply to \a request, with parent \a parent.
 */
AdminListUserAuthEventsResponse::AdminListUserAuthEventsResponse(
        const AdminListUserAuthEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminListUserAuthEventsResponsePrivate(this), parent)
{
    setRequest(new AdminListUserAuthEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminListUserAuthEventsRequest * AdminListUserAuthEventsResponse::request() const
{
    Q_D(const AdminListUserAuthEventsResponse);
    return static_cast<const AdminListUserAuthEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminListUserAuthEvents \a response.
 */
void AdminListUserAuthEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminListUserAuthEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListUserAuthEventsResponsePrivate
 * \brief The AdminListUserAuthEventsResponsePrivate class provides private implementation for AdminListUserAuthEventsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminListUserAuthEventsResponsePrivate object with public implementation \a q.
 */
AdminListUserAuthEventsResponsePrivate::AdminListUserAuthEventsResponsePrivate(
    AdminListUserAuthEventsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminListUserAuthEvents response element from \a xml.
 */
void AdminListUserAuthEventsResponsePrivate::parseAdminListUserAuthEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminListUserAuthEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
