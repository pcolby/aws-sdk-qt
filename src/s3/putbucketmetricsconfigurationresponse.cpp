// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketmetricsconfigurationresponse.h"
#include "putbucketmetricsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketMetricsConfigurationResponse
 * \brief The PutBucketMetricsConfigurationResponse class provides an interace for S3 PutBucketMetricsConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketMetricsConfiguration
 */

/*!
 * Constructs a PutBucketMetricsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketMetricsConfigurationResponse::PutBucketMetricsConfigurationResponse(
        const PutBucketMetricsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketMetricsConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketMetricsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketMetricsConfigurationRequest * PutBucketMetricsConfigurationResponse::request() const
{
    Q_D(const PutBucketMetricsConfigurationResponse);
    return static_cast<const PutBucketMetricsConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketMetricsConfiguration \a response.
 */
void PutBucketMetricsConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketMetricsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketMetricsConfigurationResponsePrivate
 * \brief The PutBucketMetricsConfigurationResponsePrivate class provides private implementation for PutBucketMetricsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketMetricsConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketMetricsConfigurationResponsePrivate::PutBucketMetricsConfigurationResponsePrivate(
    PutBucketMetricsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketMetricsConfiguration response element from \a xml.
 */
void PutBucketMetricsConfigurationResponsePrivate::parsePutBucketMetricsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketMetricsConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
