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

#include "getbucketanalyticsconfigurationresponse.h"
#include "getbucketanalyticsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketAnalyticsConfigurationResponse
 * \brief The GetBucketAnalyticsConfigurationResponse class provides an interace for S3 GetBucketAnalyticsConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketAnalyticsConfiguration
 */

/*!
 * Constructs a GetBucketAnalyticsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketAnalyticsConfigurationResponse::GetBucketAnalyticsConfigurationResponse(
        const GetBucketAnalyticsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketAnalyticsConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketAnalyticsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketAnalyticsConfigurationRequest * GetBucketAnalyticsConfigurationResponse::request() const
{
    Q_D(const GetBucketAnalyticsConfigurationResponse);
    return static_cast<const GetBucketAnalyticsConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketAnalyticsConfiguration \a response.
 */
void GetBucketAnalyticsConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketAnalyticsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketAnalyticsConfigurationResponsePrivate
 * \brief The GetBucketAnalyticsConfigurationResponsePrivate class provides private implementation for GetBucketAnalyticsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketAnalyticsConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketAnalyticsConfigurationResponsePrivate::GetBucketAnalyticsConfigurationResponsePrivate(
    GetBucketAnalyticsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketAnalyticsConfiguration response element from \a xml.
 */
void GetBucketAnalyticsConfigurationResponsePrivate::parseGetBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketAnalyticsConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
