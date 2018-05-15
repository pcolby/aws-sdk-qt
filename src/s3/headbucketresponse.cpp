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

#include "headbucketresponse.h"
#include "headbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::HeadBucketResponse
 * \brief The HeadBucketResponse class provides an interace for S3 HeadBucket responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::headBucket
 */

/*!
 * Constructs a HeadBucketResponse object for \a reply to \a request, with parent \a parent.
 */
HeadBucketResponse::HeadBucketResponse(
        const HeadBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new HeadBucketResponsePrivate(this), parent)
{
    setRequest(new HeadBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const HeadBucketRequest * HeadBucketResponse::request() const
{
    Q_D(const HeadBucketResponse);
    return static_cast<const HeadBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 HeadBucket \a response.
 */
void HeadBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(HeadBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::HeadBucketResponsePrivate
 * \brief The HeadBucketResponsePrivate class provides private implementation for HeadBucketResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a HeadBucketResponsePrivate object with public implementation \a q.
 */
HeadBucketResponsePrivate::HeadBucketResponsePrivate(
    HeadBucketResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 HeadBucket response element from \a xml.
 */
void HeadBucketResponsePrivate::parseHeadBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("HeadBucketResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
