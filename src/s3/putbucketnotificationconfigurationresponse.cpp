// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketnotificationconfigurationresponse.h"
#include "putbucketnotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketNotificationConfigurationResponse
 * \brief The PutBucketNotificationConfigurationResponse class provides an interace for S3 PutBucketNotificationConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketNotificationConfiguration
 */

/*!
 * Constructs a PutBucketNotificationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketNotificationConfigurationResponse::PutBucketNotificationConfigurationResponse(
        const PutBucketNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketNotificationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketNotificationConfigurationRequest * PutBucketNotificationConfigurationResponse::request() const
{
    Q_D(const PutBucketNotificationConfigurationResponse);
    return static_cast<const PutBucketNotificationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketNotificationConfiguration \a response.
 */
void PutBucketNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketNotificationConfigurationResponsePrivate
 * \brief The PutBucketNotificationConfigurationResponsePrivate class provides private implementation for PutBucketNotificationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketNotificationConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketNotificationConfigurationResponsePrivate::PutBucketNotificationConfigurationResponsePrivate(
    PutBucketNotificationConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketNotificationConfiguration response element from \a xml.
 */
void PutBucketNotificationConfigurationResponsePrivate::parsePutBucketNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketNotificationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
