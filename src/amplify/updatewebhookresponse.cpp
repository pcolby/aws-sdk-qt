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

#include "updatewebhookresponse.h"
#include "updatewebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateWebhookResponse
 * \brief The UpdateWebhookResponse class provides an interace for Amplify UpdateWebhook responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::updateWebhook
 */

/*!
 * Constructs a UpdateWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWebhookResponse::UpdateWebhookResponse(
        const UpdateWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new UpdateWebhookResponsePrivate(this), parent)
{
    setRequest(new UpdateWebhookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWebhookRequest * UpdateWebhookResponse::request() const
{
    Q_D(const UpdateWebhookResponse);
    return static_cast<const UpdateWebhookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify UpdateWebhook \a response.
 */
void UpdateWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::UpdateWebhookResponsePrivate
 * \brief The UpdateWebhookResponsePrivate class provides private implementation for UpdateWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateWebhookResponsePrivate object with public implementation \a q.
 */
UpdateWebhookResponsePrivate::UpdateWebhookResponsePrivate(
    UpdateWebhookResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify UpdateWebhook response element from \a xml.
 */
void UpdateWebhookResponsePrivate::parseUpdateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
