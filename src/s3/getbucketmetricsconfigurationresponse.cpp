// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(GetBucketMetricsConfigurationResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
