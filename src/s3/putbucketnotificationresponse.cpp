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

#include "putbucketnotificationresponse.h"
#include "putbucketnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketNotificationResponse
 * \brief The PutBucketNotificationResponse class provides an interace for S3 PutBucketNotification responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketNotification
 */

/*!
 * Constructs a PutBucketNotificationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketNotificationResponse::PutBucketNotificationResponse(
        const PutBucketNotificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketNotificationResponsePrivate(this), parent)
{
    setRequest(new PutBucketNotificationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketNotificationRequest * PutBucketNotificationResponse::request() const
{
    Q_D(const PutBucketNotificationResponse);
    return static_cast<const PutBucketNotificationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketNotification \a response.
 */
void PutBucketNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketNotificationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketNotificationResponsePrivate
 * \brief The PutBucketNotificationResponsePrivate class provides private implementation for PutBucketNotificationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketNotificationResponsePrivate object with public implementation \a q.
 */
PutBucketNotificationResponsePrivate::PutBucketNotificationResponsePrivate(
    PutBucketNotificationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketNotification response element from \a xml.
 */
void PutBucketNotificationResponsePrivate::parsePutBucketNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketNotificationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
