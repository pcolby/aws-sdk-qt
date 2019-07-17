/*
    Copyright 2013-2019 Paul Colby

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

#include "adminupdateautheventfeedbackresponse.h"
#include "adminupdateautheventfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateAuthEventFeedbackResponse
 * \brief The AdminUpdateAuthEventFeedbackResponse class provides an interace for CognitoIdentityProvider AdminUpdateAuthEventFeedback responses.
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
 * \sa CognitoIdentityProviderClient::adminUpdateAuthEventFeedback
 */

/*!
 * Constructs a AdminUpdateAuthEventFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
AdminUpdateAuthEventFeedbackResponse::AdminUpdateAuthEventFeedbackResponse(
        const AdminUpdateAuthEventFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUpdateAuthEventFeedbackResponsePrivate(this), parent)
{
    setRequest(new AdminUpdateAuthEventFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminUpdateAuthEventFeedbackRequest * AdminUpdateAuthEventFeedbackResponse::request() const
{
    Q_D(const AdminUpdateAuthEventFeedbackResponse);
    return static_cast<const AdminUpdateAuthEventFeedbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminUpdateAuthEventFeedback \a response.
 */
void AdminUpdateAuthEventFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminUpdateAuthEventFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateAuthEventFeedbackResponsePrivate
 * \brief The AdminUpdateAuthEventFeedbackResponsePrivate class provides private implementation for AdminUpdateAuthEventFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUpdateAuthEventFeedbackResponsePrivate object with public implementation \a q.
 */
AdminUpdateAuthEventFeedbackResponsePrivate::AdminUpdateAuthEventFeedbackResponsePrivate(
    AdminUpdateAuthEventFeedbackResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminUpdateAuthEventFeedback response element from \a xml.
 */
void AdminUpdateAuthEventFeedbackResponsePrivate::parseAdminUpdateAuthEventFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUpdateAuthEventFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
