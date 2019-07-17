/*
    Copyright 2013-2019 Paul Colby

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

#include "getbucketcorsresponse.h"
#include "getbucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketCorsResponse
 * \brief The GetBucketCorsResponse class provides an interace for S3 GetBucketCors responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketCors
 */

/*!
 * Constructs a GetBucketCorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketCorsResponse::GetBucketCorsResponse(
        const GetBucketCorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketCorsResponsePrivate(this), parent)
{
    setRequest(new GetBucketCorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketCorsRequest * GetBucketCorsResponse::request() const
{
    Q_D(const GetBucketCorsResponse);
    return static_cast<const GetBucketCorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketCors \a response.
 */
void GetBucketCorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketCorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketCorsResponsePrivate
 * \brief The GetBucketCorsResponsePrivate class provides private implementation for GetBucketCorsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketCorsResponsePrivate object with public implementation \a q.
 */
GetBucketCorsResponsePrivate::GetBucketCorsResponsePrivate(
    GetBucketCorsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketCors response element from \a xml.
 */
void GetBucketCorsResponsePrivate::parseGetBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketCorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
