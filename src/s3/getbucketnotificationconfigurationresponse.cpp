// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketnotificationconfigurationresponse.h"
#include "getbucketnotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketNotificationConfigurationResponse
 * \brief The GetBucketNotificationConfigurationResponse class provides an interace for S3 GetBucketNotificationConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketNotificationConfiguration
 */

/*!
 * Constructs a GetBucketNotificationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketNotificationConfigurationResponse::GetBucketNotificationConfigurationResponse(
        const GetBucketNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketNotificationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketNotificationConfigurationRequest * GetBucketNotificationConfigurationResponse::request() const
{
    Q_D(const GetBucketNotificationConfigurationResponse);
    return static_cast<const GetBucketNotificationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketNotificationConfiguration \a response.
 */
void GetBucketNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketNotificationConfigurationResponsePrivate
 * \brief The GetBucketNotificationConfigurationResponsePrivate class provides private implementation for GetBucketNotificationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketNotificationConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketNotificationConfigurationResponsePrivate::GetBucketNotificationConfigurationResponsePrivate(
    GetBucketNotificationConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketNotificationConfiguration response element from \a xml.
 */
void GetBucketNotificationConfigurationResponsePrivate::parseGetBucketNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketNotificationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
