/*
    Copyright 2013-2019 Paul Colby

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

#include "listoriginendpointsresponse.h"
#include "listoriginendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ListOriginEndpointsResponse
 * \brief The ListOriginEndpointsResponse class provides an interace for MediaPackage ListOriginEndpoints responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::listOriginEndpoints
 */

/*!
 * Constructs a ListOriginEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOriginEndpointsResponse::ListOriginEndpointsResponse(
        const ListOriginEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new ListOriginEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListOriginEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOriginEndpointsRequest * ListOriginEndpointsResponse::request() const
{
    Q_D(const ListOriginEndpointsResponse);
    return static_cast<const ListOriginEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage ListOriginEndpoints \a response.
 */
void ListOriginEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOriginEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::ListOriginEndpointsResponsePrivate
 * \brief The ListOriginEndpointsResponsePrivate class provides private implementation for ListOriginEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ListOriginEndpointsResponsePrivate object with public implementation \a q.
 */
ListOriginEndpointsResponsePrivate::ListOriginEndpointsResponsePrivate(
    ListOriginEndpointsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage ListOriginEndpoints response element from \a xml.
 */
void ListOriginEndpointsResponsePrivate::parseListOriginEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOriginEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
