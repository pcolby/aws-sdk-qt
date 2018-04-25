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

#include "getbucketnotificationresponse.h"
#include "getbucketnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketNotificationResponse
 * \brief The GetBucketNotificationResponse class provides an interace for S3 GetBucketNotification responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketNotification
 */

/*!
 * Constructs a GetBucketNotificationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketNotificationResponse::GetBucketNotificationResponse(
        const GetBucketNotificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketNotificationResponsePrivate(this), parent)
{
    setRequest(new GetBucketNotificationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketNotificationRequest * GetBucketNotificationResponse::request() const
{
    Q_D(const GetBucketNotificationResponse);
    return static_cast<const GetBucketNotificationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketNotification \a response.
 */
void GetBucketNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketNotificationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketNotificationResponsePrivate
 * \brief The GetBucketNotificationResponsePrivate class provides private implementation for GetBucketNotificationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketNotificationResponsePrivate object with public implementation \a q.
 */
GetBucketNotificationResponsePrivate::GetBucketNotificationResponsePrivate(
    GetBucketNotificationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketNotification response element from \a xml.
 */
void GetBucketNotificationResponsePrivate::parseGetBucketNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketNotificationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
