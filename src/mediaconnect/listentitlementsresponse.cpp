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

#include "listentitlementsresponse.h"
#include "listentitlementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::ListEntitlementsResponse
 * \brief The ListEntitlementsResponse class provides an interace for MediaConnect ListEntitlements responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::listEntitlements
 */

/*!
 * Constructs a ListEntitlementsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntitlementsResponse::ListEntitlementsResponse(
        const ListEntitlementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new ListEntitlementsResponsePrivate(this), parent)
{
    setRequest(new ListEntitlementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntitlementsRequest * ListEntitlementsResponse::request() const
{
    return static_cast<const ListEntitlementsRequest *>(MediaConnectResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConnect ListEntitlements \a response.
 */
void ListEntitlementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntitlementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::ListEntitlementsResponsePrivate
 * \brief The ListEntitlementsResponsePrivate class provides private implementation for ListEntitlementsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a ListEntitlementsResponsePrivate object with public implementation \a q.
 */
ListEntitlementsResponsePrivate::ListEntitlementsResponsePrivate(
    ListEntitlementsResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect ListEntitlements response element from \a xml.
 */
void ListEntitlementsResponsePrivate::parseListEntitlementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitlementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
