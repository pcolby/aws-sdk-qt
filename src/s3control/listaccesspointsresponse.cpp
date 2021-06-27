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

#include "listaccesspointsresponse.h"
#include "listaccesspointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListAccessPointsResponse
 * \brief The ListAccessPointsResponse class provides an interace for S3Control ListAccessPoints responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listAccessPoints
 */

/*!
 * Constructs a ListAccessPointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessPointsResponse::ListAccessPointsResponse(
        const ListAccessPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListAccessPointsResponsePrivate(this), parent)
{
    setRequest(new ListAccessPointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessPointsRequest * ListAccessPointsResponse::request() const
{
    return static_cast<const ListAccessPointsRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control ListAccessPoints \a response.
 */
void ListAccessPointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessPointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListAccessPointsResponsePrivate
 * \brief The ListAccessPointsResponsePrivate class provides private implementation for ListAccessPointsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListAccessPointsResponsePrivate object with public implementation \a q.
 */
ListAccessPointsResponsePrivate::ListAccessPointsResponsePrivate(
    ListAccessPointsResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListAccessPoints response element from \a xml.
 */
void ListAccessPointsResponsePrivate::parseListAccessPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessPointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
