// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketreplicationresponse.h"
#include "getbucketreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketReplicationResponse
 * \brief The GetBucketReplicationResponse class provides an interace for S3 GetBucketReplication responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketReplication
 */

/*!
 * Constructs a GetBucketReplicationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketReplicationResponse::GetBucketReplicationResponse(
        const GetBucketReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketReplicationResponsePrivate(this), parent)
{
    setRequest(new GetBucketReplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketReplicationRequest * GetBucketReplicationResponse::request() const
{
    Q_D(const GetBucketReplicationResponse);
    return static_cast<const GetBucketReplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketReplication \a response.
 */
void GetBucketReplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketReplicationResponsePrivate
 * \brief The GetBucketReplicationResponsePrivate class provides private implementation for GetBucketReplicationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketReplicationResponsePrivate object with public implementation \a q.
 */
GetBucketReplicationResponsePrivate::GetBucketReplicationResponsePrivate(
    GetBucketReplicationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketReplication response element from \a xml.
 */
void GetBucketReplicationResponsePrivate::parseGetBucketReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketReplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
