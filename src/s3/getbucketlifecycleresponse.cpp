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

#include "getbucketlifecycleresponse.h"
#include "getbucketlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLifecycleResponse
 * \brief The GetBucketLifecycleResponse class provides an interace for S3 GetBucketLifecycle responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLifecycle
 */

/*!
 * Constructs a GetBucketLifecycleResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketLifecycleResponse::GetBucketLifecycleResponse(
        const GetBucketLifecycleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLifecycleResponsePrivate(this), parent)
{
    setRequest(new GetBucketLifecycleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketLifecycleRequest * GetBucketLifecycleResponse::request() const
{
    Q_D(const GetBucketLifecycleResponse);
    return static_cast<const GetBucketLifecycleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketLifecycle \a response.
 */
void GetBucketLifecycleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketLifecycleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketLifecycleResponsePrivate
 * \brief The GetBucketLifecycleResponsePrivate class provides private implementation for GetBucketLifecycleResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLifecycleResponsePrivate object with public implementation \a q.
 */
GetBucketLifecycleResponsePrivate::GetBucketLifecycleResponsePrivate(
    GetBucketLifecycleResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketLifecycle response element from \a xml.
 */
void GetBucketLifecycleResponsePrivate::parseGetBucketLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLifecycleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
