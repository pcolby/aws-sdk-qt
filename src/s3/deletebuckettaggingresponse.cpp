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

#include "deletebuckettaggingresponse.h"
#include "deletebuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketTaggingResponse
 * \brief The DeleteBucketTaggingResponse class provides an interace for S3 DeleteBucketTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketTagging
 */

/*!
 * Constructs a DeleteBucketTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketTaggingResponse::DeleteBucketTaggingResponse(
        const DeleteBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketTaggingRequest * DeleteBucketTaggingResponse::request() const
{
    return static_cast<const DeleteBucketTaggingRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketTagging \a response.
 */
void DeleteBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketTaggingResponsePrivate
 * \brief The DeleteBucketTaggingResponsePrivate class provides private implementation for DeleteBucketTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketTaggingResponsePrivate object with public implementation \a q.
 */
DeleteBucketTaggingResponsePrivate::DeleteBucketTaggingResponsePrivate(
    DeleteBucketTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketTagging response element from \a xml.
 */
void DeleteBucketTaggingResponsePrivate::parseDeleteBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
