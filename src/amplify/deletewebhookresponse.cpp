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

#include "deletewebhookresponse.h"
#include "deletewebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteWebhookResponse
 * \brief The DeleteWebhookResponse class provides an interace for Amplify DeleteWebhook responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteWebhook
 */

/*!
 * Constructs a DeleteWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWebhookResponse::DeleteWebhookResponse(
        const DeleteWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteWebhookResponsePrivate(this), parent)
{
    setRequest(new DeleteWebhookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWebhookRequest * DeleteWebhookResponse::request() const
{
    return static_cast<const DeleteWebhookRequest *>(AmplifyResponse::request());
}

/*!
 * \reimp
 * Parses a successful Amplify DeleteWebhook \a response.
 */
void DeleteWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteWebhookResponsePrivate
 * \brief The DeleteWebhookResponsePrivate class provides private implementation for DeleteWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteWebhookResponsePrivate object with public implementation \a q.
 */
DeleteWebhookResponsePrivate::DeleteWebhookResponsePrivate(
    DeleteWebhookResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteWebhook response element from \a xml.
 */
void DeleteWebhookResponsePrivate::parseDeleteWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
