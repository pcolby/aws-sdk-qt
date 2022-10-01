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

#include "removesourceidentifierfromsubscriptionresponse.h"
#include "removesourceidentifierfromsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RemoveSourceIdentifierFromSubscriptionResponse
 * \brief The RemoveSourceIdentifierFromSubscriptionResponse class provides an interace for DocDb RemoveSourceIdentifierFromSubscription responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::removeSourceIdentifierFromSubscription
 */

/*!
 * Constructs a RemoveSourceIdentifierFromSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveSourceIdentifierFromSubscriptionResponse::RemoveSourceIdentifierFromSubscriptionResponse(
        const RemoveSourceIdentifierFromSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new RemoveSourceIdentifierFromSubscriptionResponsePrivate(this), parent)
{
    setRequest(new RemoveSourceIdentifierFromSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveSourceIdentifierFromSubscriptionRequest * RemoveSourceIdentifierFromSubscriptionResponse::request() const
{
    Q_D(const RemoveSourceIdentifierFromSubscriptionResponse);
    return static_cast<const RemoveSourceIdentifierFromSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb RemoveSourceIdentifierFromSubscription \a response.
 */
void RemoveSourceIdentifierFromSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveSourceIdentifierFromSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::RemoveSourceIdentifierFromSubscriptionResponsePrivate
 * \brief The RemoveSourceIdentifierFromSubscriptionResponsePrivate class provides private implementation for RemoveSourceIdentifierFromSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RemoveSourceIdentifierFromSubscriptionResponsePrivate object with public implementation \a q.
 */
RemoveSourceIdentifierFromSubscriptionResponsePrivate::RemoveSourceIdentifierFromSubscriptionResponsePrivate(
    RemoveSourceIdentifierFromSubscriptionResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb RemoveSourceIdentifierFromSubscription response element from \a xml.
 */
void RemoveSourceIdentifierFromSubscriptionResponsePrivate::parseRemoveSourceIdentifierFromSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveSourceIdentifierFromSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
