// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DeleteBucketMetricsConfigurationResponse);
    return static_cast<const DeleteBucketMetricsConfigurationRequest *>(d->request);
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
