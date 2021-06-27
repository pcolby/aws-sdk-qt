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

#include "putbucketreplicationresponse.h"
#include "putbucketreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketReplicationResponse
 * \brief The PutBucketReplicationResponse class provides an interace for S3 PutBucketReplication responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketReplication
 */

/*!
 * Constructs a PutBucketReplicationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketReplicationResponse::PutBucketReplicationResponse(
        const PutBucketReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketReplicationResponsePrivate(this), parent)
{
    setRequest(new PutBucketReplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketReplicationRequest * PutBucketReplicationResponse::request() const
{
    return static_cast<const PutBucketReplicationRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketReplication \a response.
 */
void PutBucketReplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketReplicationResponsePrivate
 * \brief The PutBucketReplicationResponsePrivate class provides private implementation for PutBucketReplicationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketReplicationResponsePrivate object with public implementation \a q.
 */
PutBucketReplicationResponsePrivate::PutBucketReplicationResponsePrivate(
    PutBucketReplicationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketReplication response element from \a xml.
 */
void PutBucketReplicationResponsePrivate::parsePutBucketReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketReplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
