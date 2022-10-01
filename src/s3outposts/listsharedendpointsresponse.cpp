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

#include "listsharedendpointsresponse.h"
#include "listsharedendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::ListSharedEndpointsResponse
 * \brief The ListSharedEndpointsResponse class provides an interace for S3Outposts ListSharedEndpoints responses.
 *
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 *
 * \sa S3OutpostsClient::listSharedEndpoints
 */

/*!
 * Constructs a ListSharedEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSharedEndpointsResponse::ListSharedEndpointsResponse(
        const ListSharedEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3OutpostsResponse(new ListSharedEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListSharedEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSharedEndpointsRequest * ListSharedEndpointsResponse::request() const
{
    Q_D(const ListSharedEndpointsResponse);
    return static_cast<const ListSharedEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Outposts ListSharedEndpoints \a response.
 */
void ListSharedEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSharedEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Outposts::ListSharedEndpointsResponsePrivate
 * \brief The ListSharedEndpointsResponsePrivate class provides private implementation for ListSharedEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a ListSharedEndpointsResponsePrivate object with public implementation \a q.
 */
ListSharedEndpointsResponsePrivate::ListSharedEndpointsResponsePrivate(
    ListSharedEndpointsResponse * const q) : S3OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a S3Outposts ListSharedEndpoints response element from \a xml.
 */
void ListSharedEndpointsResponsePrivate::parseListSharedEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSharedEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Outposts
} // namespace QtAws
