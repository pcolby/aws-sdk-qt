// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(DeleteBucketAnalyticsConfigurationResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
