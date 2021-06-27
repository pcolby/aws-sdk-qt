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

#include "listobjectsv2response.h"
#include "listobjectsv2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListObjectsV2Response
 * \brief The ListObjectsV2Response class provides an interace for S3 ListObjectsV2 responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listObjectsV2
 */

/*!
 * Constructs a ListObjectsV2Response object for \a reply to \a request, with parent \a parent.
 */
ListObjectsV2Response::ListObjectsV2Response(
        const ListObjectsV2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListObjectsV2ResponsePrivate(this), parent)
{
    setRequest(new ListObjectsV2Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectsV2Request * ListObjectsV2Response::request() const
{
    return static_cast<const ListObjectsV2Request *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 ListObjectsV2 \a response.
 */
void ListObjectsV2Response::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectsV2Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListObjectsV2ResponsePrivate
 * \brief The ListObjectsV2ResponsePrivate class provides private implementation for ListObjectsV2Response.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListObjectsV2ResponsePrivate object with public implementation \a q.
 */
ListObjectsV2ResponsePrivate::ListObjectsV2ResponsePrivate(
    ListObjectsV2Response * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListObjectsV2 response element from \a xml.
 */
void ListObjectsV2ResponsePrivate::parseListObjectsV2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectsV2Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
