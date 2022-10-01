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
namespace DocDb {

/*!
 * \class QtAws::DocDb::AddSourceIdentifierToSubscriptionResponse
 * \brief The AddSourceIdentifierToSubscriptionResponse class provides an interace for DocDb AddSourceIdentifierToSubscription responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::addSourceIdentifierToSubscription
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
AddSourceIdentifierToSubscriptionResponse::AddSourceIdentifierToSubscriptionResponse(
        const AddSourceIdentifierToSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new AddSourceIdentifierToSubscriptionResponsePrivate(this), parent)
{
    setRequest(new AddSourceIdentifierToSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddSourceIdentifierToSubscriptionRequest * AddSourceIdentifierToSubscriptionResponse::request() const
{
    Q_D(const AddSourceIdentifierToSubscriptionResponse);
    return static_cast<const AddSourceIdentifierToSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb AddSourceIdentifierToSubscription \a response.
 */
void AddSourceIdentifierToSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddSourceIdentifierToSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::AddSourceIdentifierToSubscriptionResponsePrivate
 * \brief The AddSourceIdentifierToSubscriptionResponsePrivate class provides private implementation for AddSourceIdentifierToSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionResponsePrivate object with public implementation \a q.
 */
AddSourceIdentifierToSubscriptionResponsePrivate::AddSourceIdentifierToSubscriptionResponsePrivate(
    AddSourceIdentifierToSubscriptionResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb AddSourceIdentifierToSubscription response element from \a xml.
 */
void AddSourceIdentifierToSubscriptionResponsePrivate::parseAddSourceIdentifierToSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddSourceIdentifierToSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
