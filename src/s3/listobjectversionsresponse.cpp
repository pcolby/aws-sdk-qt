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

#include "listobjectversionsresponse.h"
#include "listobjectversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectVersionsResponse
 * \brief The ListObjectVersionsResponse class provides an interace for S3 ListObjectVersions responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjectVersions
 */

/*!
 * Constructs a ListObjectVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectVersionsResponse::ListObjectVersionsResponse(
        const ListObjectVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListObjectVersionsResponsePrivate(this), parent)
{
    setRequest(new ListObjectVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectVersionsRequest * ListObjectVersionsResponse::request() const
{
    Q_D(const ListObjectVersionsResponse);
    return static_cast<const ListObjectVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListObjectVersions \a response.
 */
void ListObjectVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListObjectVersionsResponsePrivate
 * \brief The ListObjectVersionsResponsePrivate class provides private implementation for ListObjectVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListObjectVersionsResponsePrivate object with public implementation \a q.
 */
ListObjectVersionsResponsePrivate::ListObjectVersionsResponsePrivate(
    ListObjectVersionsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListObjectVersions response element from \a xml.
 */
void ListObjectVersionsResponsePrivate::parseListObjectVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
