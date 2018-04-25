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

#include "getbucketversioningresponse.h"
#include "getbucketversioningresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketVersioningResponse
 * \brief The GetBucketVersioningResponse class provides an interace for S3 GetBucketVersioning responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketVersioning
 */

/*!
 * Constructs a GetBucketVersioningResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketVersioningResponse::GetBucketVersioningResponse(
        const GetBucketVersioningRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketVersioningResponsePrivate(this), parent)
{
    setRequest(new GetBucketVersioningRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketVersioningRequest * GetBucketVersioningResponse::request() const
{
    Q_D(const GetBucketVersioningResponse);
    return static_cast<const GetBucketVersioningRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketVersioning \a response.
 */
void GetBucketVersioningResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketVersioningResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketVersioningResponsePrivate
 * \brief The GetBucketVersioningResponsePrivate class provides private implementation for GetBucketVersioningResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketVersioningResponsePrivate object with public implementation \a q.
 */
GetBucketVersioningResponsePrivate::GetBucketVersioningResponsePrivate(
    GetBucketVersioningResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketVersioning response element from \a xml.
 */
void GetBucketVersioningResponsePrivate::parseGetBucketVersioningResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketVersioningResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
