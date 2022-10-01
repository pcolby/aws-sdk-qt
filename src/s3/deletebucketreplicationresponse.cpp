// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
