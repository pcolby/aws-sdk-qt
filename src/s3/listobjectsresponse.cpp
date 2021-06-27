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

#include "listobjectsresponse.h"
#include "listobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectsResponse
 * \brief The ListObjectsResponse class provides an interace for S3 ListObjects responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjects
 */

/*!
 * Constructs a ListObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectsResponse::ListObjectsResponse(
        const ListObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListObjectsResponsePrivate(this), parent)
{
    setRequest(new ListObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectsRequest * ListObjectsResponse::request() const
{
    return static_cast<const ListObjectsRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 ListObjects \a response.
 */
void ListObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListObjectsResponsePrivate
 * \brief The ListObjectsResponsePrivate class provides private implementation for ListObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListObjectsResponsePrivate object with public implementation \a q.
 */
ListObjectsResponsePrivate::ListObjectsResponsePrivate(
    ListObjectsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListObjects response element from \a xml.
 */
void ListObjectsResponsePrivate::parseListObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
