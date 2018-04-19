/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbuckettaggingresponse.h"
#include "getbuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketTaggingResponse
 * \brief The GetBucketTaggingResponse class provides an interace for S3 GetBucketTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketTagging
 */

/*!
 * Constructs a GetBucketTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketTaggingResponse::GetBucketTaggingResponse(
        const GetBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new GetBucketTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketTaggingRequest * GetBucketTaggingResponse::request() const
{
    Q_D(const GetBucketTaggingResponse);
    return static_cast<const GetBucketTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketTagging \a response.
 */
void GetBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketTaggingResponsePrivate
 * \brief The GetBucketTaggingResponsePrivate class provides private implementation for GetBucketTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketTaggingResponsePrivate object with public implementation \a q.
 */
GetBucketTaggingResponsePrivate::GetBucketTaggingResponsePrivate(
    GetBucketTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketTagging response element from \a xml.
 */
void GetBucketTaggingResponsePrivate::parseGetBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketTaggingResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
