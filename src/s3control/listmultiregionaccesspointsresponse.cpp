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

#include "listmultiregionaccesspointsresponse.h"
#include "listmultiregionaccesspointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListMultiRegionAccessPointsResponse
 * \brief The ListMultiRegionAccessPointsResponse class provides an interace for S3Control ListMultiRegionAccessPoints responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listMultiRegionAccessPoints
 */

/*!
 * Constructs a ListMultiRegionAccessPointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMultiRegionAccessPointsResponse::ListMultiRegionAccessPointsResponse(
        const ListMultiRegionAccessPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListMultiRegionAccessPointsResponsePrivate(this), parent)
{
    setRequest(new ListMultiRegionAccessPointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMultiRegionAccessPointsRequest * ListMultiRegionAccessPointsResponse::request() const
{
    Q_D(const ListMultiRegionAccessPointsResponse);
    return static_cast<const ListMultiRegionAccessPointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control ListMultiRegionAccessPoints \a response.
 */
void ListMultiRegionAccessPointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMultiRegionAccessPointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListMultiRegionAccessPointsResponsePrivate
 * \brief The ListMultiRegionAccessPointsResponsePrivate class provides private implementation for ListMultiRegionAccessPointsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListMultiRegionAccessPointsResponsePrivate object with public implementation \a q.
 */
ListMultiRegionAccessPointsResponsePrivate::ListMultiRegionAccessPointsResponsePrivate(
    ListMultiRegionAccessPointsResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListMultiRegionAccessPoints response element from \a xml.
 */
void ListMultiRegionAccessPointsResponsePrivate::parseListMultiRegionAccessPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMultiRegionAccessPointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
