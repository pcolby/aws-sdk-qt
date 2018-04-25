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

#include "getbucketmetricsconfigurationresponse.h"
#include "getbucketmetricsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketMetricsConfigurationResponse
 * \brief The GetBucketMetricsConfigurationResponse class provides an interace for S3 GetBucketMetricsConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketMetricsConfiguration
 */

/*!
 * Constructs a GetBucketMetricsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketMetricsConfigurationResponse::GetBucketMetricsConfigurationResponse(
        const GetBucketMetricsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketMetricsConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketMetricsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketMetricsConfigurationRequest * GetBucketMetricsConfigurationResponse::request() const
{
    Q_D(const GetBucketMetricsConfigurationResponse);
    return static_cast<const GetBucketMetricsConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketMetricsConfiguration \a response.
 */
void GetBucketMetricsConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketMetricsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketMetricsConfigurationResponsePrivate
 * \brief The GetBucketMetricsConfigurationResponsePrivate class provides private implementation for GetBucketMetricsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketMetricsConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketMetricsConfigurationResponsePrivate::GetBucketMetricsConfigurationResponsePrivate(
    GetBucketMetricsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketMetricsConfiguration response element from \a xml.
 */
void GetBucketMetricsConfigurationResponsePrivate::parseGetBucketMetricsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketMetricsConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
