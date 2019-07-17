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

#include "getbucketwebsiteresponse.h"
#include "getbucketwebsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketWebsiteResponse
 * \brief The GetBucketWebsiteResponse class provides an interace for S3 GetBucketWebsite responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketWebsite
 */

/*!
 * Constructs a GetBucketWebsiteResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketWebsiteResponse::GetBucketWebsiteResponse(
        const GetBucketWebsiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketWebsiteResponsePrivate(this), parent)
{
    setRequest(new GetBucketWebsiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketWebsiteRequest * GetBucketWebsiteResponse::request() const
{
    Q_D(const GetBucketWebsiteResponse);
    return static_cast<const GetBucketWebsiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketWebsite \a response.
 */
void GetBucketWebsiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketWebsiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketWebsiteResponsePrivate
 * \brief The GetBucketWebsiteResponsePrivate class provides private implementation for GetBucketWebsiteResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketWebsiteResponsePrivate object with public implementation \a q.
 */
GetBucketWebsiteResponsePrivate::GetBucketWebsiteResponsePrivate(
    GetBucketWebsiteResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketWebsite response element from \a xml.
 */
void GetBucketWebsiteResponsePrivate::parseGetBucketWebsiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketWebsiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
