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

#include "deleteeventsubscriptionresponse.h"
#include "deleteeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteEventSubscriptionResponse
 * \brief The DeleteEventSubscriptionResponse class provides an interace for DocDB DeleteEventSubscription responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteEventSubscription
 */

/*!
 * Constructs a DeleteEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventSubscriptionResponse::DeleteEventSubscriptionResponse(
        const DeleteEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DeleteEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventSubscriptionRequest * DeleteEventSubscriptionResponse::request() const
{
    Q_D(const DeleteEventSubscriptionResponse);
    return static_cast<const DeleteEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB DeleteEventSubscription \a response.
 */
void DeleteEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DeleteEventSubscriptionResponsePrivate
 * \brief The DeleteEventSubscriptionResponsePrivate class provides private implementation for DeleteEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteEventSubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteEventSubscriptionResponsePrivate::DeleteEventSubscriptionResponsePrivate(
    DeleteEventSubscriptionResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DeleteEventSubscription response element from \a xml.
 */
void DeleteEventSubscriptionResponsePrivate::parseDeleteEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
