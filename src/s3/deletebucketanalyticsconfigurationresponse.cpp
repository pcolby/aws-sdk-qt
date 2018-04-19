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

#include "deletebucketanalyticsconfigurationresponse.h"
#include "deletebucketanalyticsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketAnalyticsConfigurationResponse
 * \brief The DeleteBucketAnalyticsConfigurationResponse class provides an interace for S3 DeleteBucketAnalyticsConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketAnalyticsConfiguration
 */

/*!
 * Constructs a DeleteBucketAnalyticsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketAnalyticsConfigurationResponse::DeleteBucketAnalyticsConfigurationResponse(
        const DeleteBucketAnalyticsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketAnalyticsConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketAnalyticsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketAnalyticsConfigurationRequest * DeleteBucketAnalyticsConfigurationResponse::request() const
{
    Q_D(const DeleteBucketAnalyticsConfigurationResponse);
    return static_cast<const DeleteBucketAnalyticsConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketAnalyticsConfiguration \a response.
 */
void DeleteBucketAnalyticsConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBucketAnalyticsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketAnalyticsConfigurationResponsePrivate
 * \brief The DeleteBucketAnalyticsConfigurationResponsePrivate class provides private implementation for DeleteBucketAnalyticsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketAnalyticsConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteBucketAnalyticsConfigurationResponsePrivate::DeleteBucketAnalyticsConfigurationResponsePrivate(
    DeleteBucketAnalyticsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketAnalyticsConfiguration response element from \a xml.
 */
void DeleteBucketAnalyticsConfigurationResponsePrivate::parseDeleteBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketAnalyticsConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
