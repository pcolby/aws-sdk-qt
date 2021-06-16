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

#include "createeventsubscriptionresponse.h"
#include "createeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateEventSubscriptionResponse
 * \brief The CreateEventSubscriptionResponse class provides an interace for DocDB CreateEventSubscription responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createEventSubscription
 */

/*!
 * Constructs a CreateEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEventSubscriptionResponse::CreateEventSubscriptionResponse(
        const CreateEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new CreateEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEventSubscriptionRequest * CreateEventSubscriptionResponse::request() const
{
    Q_D(const CreateEventSubscriptionResponse);
    return static_cast<const CreateEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB CreateEventSubscription \a response.
 */
void CreateEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::CreateEventSubscriptionResponsePrivate
 * \brief The CreateEventSubscriptionResponsePrivate class provides private implementation for CreateEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateEventSubscriptionResponsePrivate object with public implementation \a q.
 */
CreateEventSubscriptionResponsePrivate::CreateEventSubscriptionResponsePrivate(
    CreateEventSubscriptionResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB CreateEventSubscription response element from \a xml.
 */
void CreateEventSubscriptionResponsePrivate::parseCreateEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
