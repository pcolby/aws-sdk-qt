// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateautheventfeedbackresponse.h"
#include "updateautheventfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateAuthEventFeedbackResponse
 * \brief The UpdateAuthEventFeedbackResponse class provides an interace for CognitoIdentityProvider UpdateAuthEventFeedback responses.
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
 * \sa CognitoIdentityProviderClient::updateAuthEventFeedback
 */

/*!
 * Constructs a UpdateAuthEventFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAuthEventFeedbackResponse::UpdateAuthEventFeedbackResponse(
        const UpdateAuthEventFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateAuthEventFeedbackResponsePrivate(this), parent)
{
    setRequest(new UpdateAuthEventFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAuthEventFeedbackRequest * UpdateAuthEventFeedbackResponse::request() const
{
    Q_D(const UpdateAuthEventFeedbackResponse);
    return static_cast<const UpdateAuthEventFeedbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateAuthEventFeedback \a response.
 */
void UpdateAuthEventFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAuthEventFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateAuthEventFeedbackResponsePrivate
 * \brief The UpdateAuthEventFeedbackResponsePrivate class provides private implementation for UpdateAuthEventFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateAuthEventFeedbackResponsePrivate object with public implementation \a q.
 */
UpdateAuthEventFeedbackResponsePrivate::UpdateAuthEventFeedbackResponsePrivate(
    UpdateAuthEventFeedbackResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateAuthEventFeedback response element from \a xml.
 */
void UpdateAuthEventFeedbackResponsePrivate::parseUpdateAuthEventFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAuthEventFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
