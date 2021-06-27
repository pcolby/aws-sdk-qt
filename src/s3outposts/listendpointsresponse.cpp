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

#include "listendpointsresponse.h"
#include "listendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::ListEndpointsResponse
 * \brief The ListEndpointsResponse class provides an interace for S3Outposts ListEndpoints responses.
 *
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 *
 * \sa S3OutpostsClient::listEndpoints
 */

/*!
 * Constructs a ListEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEndpointsResponse::ListEndpointsResponse(
        const ListEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3OutpostsResponse(new ListEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEndpointsRequest * ListEndpointsResponse::request() const
{
    return static_cast<const ListEndpointsRequest *>(S3OutpostsResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Outposts ListEndpoints \a response.
 */
void ListEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Outposts::ListEndpointsResponsePrivate
 * \brief The ListEndpointsResponsePrivate class provides private implementation for ListEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a ListEndpointsResponsePrivate object with public implementation \a q.
 */
ListEndpointsResponsePrivate::ListEndpointsResponsePrivate(
    ListEndpointsResponse * const q) : S3OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a S3Outposts ListEndpoints response element from \a xml.
 */
void ListEndpointsResponsePrivate::parseListEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Outposts
} // namespace QtAws
