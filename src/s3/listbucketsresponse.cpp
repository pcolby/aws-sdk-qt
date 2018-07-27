/*
    Copyright 2013-2018 Paul Colby

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

#include "listbucketsresponse.h"
#include "listbucketsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketsResponse
 * \brief The ListBucketsResponse class provides an interace for S3 ListBuckets responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBuckets
 */

/*!
 * Constructs a ListBucketsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBucketsResponse::ListBucketsResponse(
        const ListBucketsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketsResponsePrivate(this), parent)
{
    setRequest(new ListBucketsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBucketsRequest * ListBucketsResponse::request() const
{
    Q_D(const ListBucketsResponse);
    return static_cast<const ListBucketsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 ListBuckets \a response.
 */
void ListBucketsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBucketsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::ListBucketsResponsePrivate
 * \brief The ListBucketsResponsePrivate class provides private implementation for ListBucketsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketsResponsePrivate object with public implementation \a q.
 */
ListBucketsResponsePrivate::ListBucketsResponsePrivate(
    ListBucketsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 ListBuckets response element from \a xml.
 */
void ListBucketsResponsePrivate::parseListBucketsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
