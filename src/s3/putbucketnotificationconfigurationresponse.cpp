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
    return static_cast<const PutBucketNotificationConfigurationRequest *>(S3Response::request());
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
