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
    Q_D(GetBucketReplicationResponse);
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
    /// @todo
}

} // namespace S3
} // namespace QtAws
