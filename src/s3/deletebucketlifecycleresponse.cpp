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

#include "deletebucketlifecycleresponse.h"
#include "deletebucketlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketLifecycleResponse
 * \brief The DeleteBucketLifecycleResponse class provides an interace for S3 DeleteBucketLifecycle responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketLifecycle
 */

/*!
 * Constructs a DeleteBucketLifecycleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketLifecycleResponse::DeleteBucketLifecycleResponse(
        const DeleteBucketLifecycleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketLifecycleResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketLifecycleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketLifecycleRequest * DeleteBucketLifecycleResponse::request() const
{
    Q_D(const DeleteBucketLifecycleResponse);
    return static_cast<const DeleteBucketLifecycleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketLifecycle \a response.
 */
void DeleteBucketLifecycleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketLifecycleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketLifecycleResponsePrivate
 * \brief The DeleteBucketLifecycleResponsePrivate class provides private implementation for DeleteBucketLifecycleResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketLifecycleResponsePrivate object with public implementation \a q.
 */
DeleteBucketLifecycleResponsePrivate::DeleteBucketLifecycleResponsePrivate(
    DeleteBucketLifecycleResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketLifecycle response element from \a xml.
 */
void DeleteBucketLifecycleResponsePrivate::parseDeleteBucketLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketLifecycleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
