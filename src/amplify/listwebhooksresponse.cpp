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

#include "listwebhooksresponse.h"
#include "listwebhooksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListWebhooksResponse
 * \brief The ListWebhooksResponse class provides an interace for Amplify ListWebhooks responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::listWebhooks
 */

/*!
 * Constructs a ListWebhooksResponse object for \a reply to \a request, with parent \a parent.
 */
ListWebhooksResponse::ListWebhooksResponse(
        const ListWebhooksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListWebhooksResponsePrivate(this), parent)
{
    setRequest(new ListWebhooksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWebhooksRequest * ListWebhooksResponse::request() const
{
    Q_D(const ListWebhooksResponse);
    return static_cast<const ListWebhooksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify ListWebhooks \a response.
 */
void ListWebhooksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWebhooksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListWebhooksResponsePrivate
 * \brief The ListWebhooksResponsePrivate class provides private implementation for ListWebhooksResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListWebhooksResponsePrivate object with public implementation \a q.
 */
ListWebhooksResponsePrivate::ListWebhooksResponsePrivate(
    ListWebhooksResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListWebhooks response element from \a xml.
 */
void ListWebhooksResponsePrivate::parseListWebhooksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWebhooksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
