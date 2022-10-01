// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
