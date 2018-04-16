/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The PutBucketNotificationResponse class encapsulates S3 PutBucketNotification responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketNotification
 */

/*!
 * @brief  Constructs a new PutBucketNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const PutBucketNotificationRequest * PutBucketNotificationResponse::request() const
{
    Q_D(const PutBucketNotificationResponse);
    return static_cast<const PutBucketNotificationRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 PutBucketNotification response.
 *
 * @param  response  Response to parse.
 */
void PutBucketNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketNotificationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutBucketNotificationResponsePrivate
 *
 * \brief Private implementation for PutBucketNotificationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketNotificationResponse instance.
 */
PutBucketNotificationResponsePrivate::PutBucketNotificationResponsePrivate(
    PutBucketNotificationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 PutBucketNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketNotificationResponsePrivate::parsePutBucketNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketNotificationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
