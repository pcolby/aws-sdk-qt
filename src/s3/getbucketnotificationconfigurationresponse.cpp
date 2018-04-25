/*
    Copyright 2013-2018 Paul Colby

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
    Q_D(GetBucketNotificationConfigurationResponse);
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
    /// @todo
}

} // namespace S3
} // namespace QtAws
