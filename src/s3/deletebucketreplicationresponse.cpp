/*
    Copyright 2013-2020 Paul Colby

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

#include "deletebucketreplicationresponse.h"
#include "deletebucketreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketReplicationResponse
 * \brief The DeleteBucketReplicationResponse class provides an interace for S3 DeleteBucketReplication responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketReplication
 */

/*!
 * Constructs a DeleteBucketReplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketReplicationResponse::DeleteBucketReplicationResponse(
        const DeleteBucketReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketReplicationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketReplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketReplicationRequest * DeleteBucketReplicationResponse::request() const
{
    Q_D(const DeleteBucketReplicationResponse);
    return static_cast<const DeleteBucketReplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketReplication \a response.
 */
void DeleteBucketReplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketReplicationResponsePrivate
 * \brief The DeleteBucketReplicationResponsePrivate class provides private implementation for DeleteBucketReplicationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketReplicationResponsePrivate object with public implementation \a q.
 */
DeleteBucketReplicationResponsePrivate::DeleteBucketReplicationResponsePrivate(
    DeleteBucketReplicationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketReplication response element from \a xml.
 */
void DeleteBucketReplicationResponsePrivate::parseDeleteBucketReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketReplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
