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

#include "deletebucketresponse.h"
#include "deletebucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketResponse
 * \brief The DeleteBucketResponse class provides an interace for S3 DeleteBucket responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucket
 */

/*!
 * Constructs a DeleteBucketResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketResponse::DeleteBucketResponse(
        const DeleteBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketRequest * DeleteBucketResponse::request() const
{
    Q_D(const DeleteBucketResponse);
    return static_cast<const DeleteBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucket \a response.
 */
void DeleteBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketResponsePrivate
 * \brief The DeleteBucketResponsePrivate class provides private implementation for DeleteBucketResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketResponsePrivate object with public implementation \a q.
 */
DeleteBucketResponsePrivate::DeleteBucketResponsePrivate(
    DeleteBucketResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucket response element from \a xml.
 */
void DeleteBucketResponsePrivate::parseDeleteBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
