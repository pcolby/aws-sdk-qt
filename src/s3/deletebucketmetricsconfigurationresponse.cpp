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

#include "deletebucketmetricsconfigurationresponse.h"
#include "deletebucketmetricsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketMetricsConfigurationResponse
 * \brief The DeleteBucketMetricsConfigurationResponse class provides an interace for S3 DeleteBucketMetricsConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketMetricsConfiguration
 */

/*!
 * Constructs a DeleteBucketMetricsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketMetricsConfigurationResponse::DeleteBucketMetricsConfigurationResponse(
        const DeleteBucketMetricsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketMetricsConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketMetricsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketMetricsConfigurationRequest * DeleteBucketMetricsConfigurationResponse::request() const
{
    return static_cast<const DeleteBucketMetricsConfigurationRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketMetricsConfiguration \a response.
 */
void DeleteBucketMetricsConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketMetricsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketMetricsConfigurationResponsePrivate
 * \brief The DeleteBucketMetricsConfigurationResponsePrivate class provides private implementation for DeleteBucketMetricsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketMetricsConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteBucketMetricsConfigurationResponsePrivate::DeleteBucketMetricsConfigurationResponsePrivate(
    DeleteBucketMetricsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketMetricsConfiguration response element from \a xml.
 */
void DeleteBucketMetricsConfigurationResponsePrivate::parseDeleteBucketMetricsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketMetricsConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
