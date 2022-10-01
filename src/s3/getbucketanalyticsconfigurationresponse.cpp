// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
