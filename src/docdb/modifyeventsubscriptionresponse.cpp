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

#include "modifyeventsubscriptionresponse.h"
#include "modifyeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyEventSubscriptionResponse
 * \brief The ModifyEventSubscriptionResponse class provides an interace for DocDB ModifyEventSubscription responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyEventSubscription
 */

/*!
 * Constructs a ModifyEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyEventSubscriptionResponse::ModifyEventSubscriptionResponse(
        const ModifyEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new ModifyEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new ModifyEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyEventSubscriptionRequest * ModifyEventSubscriptionResponse::request() const
{
    Q_D(const ModifyEventSubscriptionResponse);
    return static_cast<const ModifyEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB ModifyEventSubscription \a response.
 */
void ModifyEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::ModifyEventSubscriptionResponsePrivate
 * \brief The ModifyEventSubscriptionResponsePrivate class provides private implementation for ModifyEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyEventSubscriptionResponsePrivate object with public implementation \a q.
 */
ModifyEventSubscriptionResponsePrivate::ModifyEventSubscriptionResponsePrivate(
    ModifyEventSubscriptionResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB ModifyEventSubscription response element from \a xml.
 */
void ModifyEventSubscriptionResponsePrivate::parseModifyEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
