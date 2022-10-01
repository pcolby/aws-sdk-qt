// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketanalyticsconfigurationresponse.h"
#include "putbucketanalyticsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAnalyticsConfigurationResponse
 * \brief The PutBucketAnalyticsConfigurationResponse class provides an interace for S3 PutBucketAnalyticsConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketAnalyticsConfiguration
 */

/*!
 * Constructs a PutBucketAnalyticsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketAnalyticsConfigurationResponse::PutBucketAnalyticsConfigurationResponse(
        const PutBucketAnalyticsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketAnalyticsConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketAnalyticsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketAnalyticsConfigurationRequest * PutBucketAnalyticsConfigurationResponse::request() const
{
    Q_D(const PutBucketAnalyticsConfigurationResponse);
    return static_cast<const PutBucketAnalyticsConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketAnalyticsConfiguration \a response.
 */
void PutBucketAnalyticsConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketAnalyticsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketAnalyticsConfigurationResponsePrivate
 * \brief The PutBucketAnalyticsConfigurationResponsePrivate class provides private implementation for PutBucketAnalyticsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketAnalyticsConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketAnalyticsConfigurationResponsePrivate::PutBucketAnalyticsConfigurationResponsePrivate(
    PutBucketAnalyticsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketAnalyticsConfiguration response element from \a xml.
 */
void PutBucketAnalyticsConfigurationResponsePrivate::parsePutBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketAnalyticsConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
