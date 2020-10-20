/*
    Copyright 2013-2020 Paul Colby

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

#include "createwebhookresponse.h"
#include "createwebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateWebhookResponse
 * \brief The CreateWebhookResponse class provides an interace for Amplify CreateWebhook responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::createWebhook
 */

/*!
 * Constructs a CreateWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWebhookResponse::CreateWebhookResponse(
        const CreateWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new CreateWebhookResponsePrivate(this), parent)
{
    setRequest(new CreateWebhookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWebhookRequest * CreateWebhookResponse::request() const
{
    Q_D(const CreateWebhookResponse);
    return static_cast<const CreateWebhookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify CreateWebhook \a response.
 */
void CreateWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::CreateWebhookResponsePrivate
 * \brief The CreateWebhookResponsePrivate class provides private implementation for CreateWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateWebhookResponsePrivate object with public implementation \a q.
 */
CreateWebhookResponsePrivate::CreateWebhookResponsePrivate(
    CreateWebhookResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify CreateWebhook response element from \a xml.
 */
void CreateWebhookResponsePrivate::parseCreateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
