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

#include "addsourceidentifiertosubscriptionresponse.h"
#include "addsourceidentifiertosubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::AddSourceIdentifierToSubscriptionResponse
 * \brief The AddSourceIdentifierToSubscriptionResponse class provides an interace for DocDB AddSourceIdentifierToSubscription responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::addSourceIdentifierToSubscription
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
AddSourceIdentifierToSubscriptionResponse::AddSourceIdentifierToSubscriptionResponse(
        const AddSourceIdentifierToSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new AddSourceIdentifierToSubscriptionResponsePrivate(this), parent)
{
    setRequest(new AddSourceIdentifierToSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddSourceIdentifierToSubscriptionRequest * AddSourceIdentifierToSubscriptionResponse::request() const
{
    return static_cast<const AddSourceIdentifierToSubscriptionRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB AddSourceIdentifierToSubscription \a response.
 */
void AddSourceIdentifierToSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddSourceIdentifierToSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::AddSourceIdentifierToSubscriptionResponsePrivate
 * \brief The AddSourceIdentifierToSubscriptionResponsePrivate class provides private implementation for AddSourceIdentifierToSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionResponsePrivate object with public implementation \a q.
 */
AddSourceIdentifierToSubscriptionResponsePrivate::AddSourceIdentifierToSubscriptionResponsePrivate(
    AddSourceIdentifierToSubscriptionResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB AddSourceIdentifierToSubscription response element from \a xml.
 */
void AddSourceIdentifierToSubscriptionResponsePrivate::parseAddSourceIdentifierToSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddSourceIdentifierToSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
