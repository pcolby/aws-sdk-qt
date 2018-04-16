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

#include "getbucketnotificationconfigurationresponse.h"
#include "getbucketnotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketNotificationConfigurationResponse
 *
 * \brief The GetBucketNotificationConfigurationResponse class encapsulates S3 GetBucketNotificationConfiguration responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketNotificationConfiguration
 */

/*!
 * @brief  Constructs a new GetBucketNotificationConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const GetBucketNotificationConfigurationRequest * GetBucketNotificationConfigurationResponse::request() const
{
    Q_D(const GetBucketNotificationConfigurationResponse);
    return static_cast<const GetBucketNotificationConfigurationRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 GetBucketNotificationConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetBucketNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetBucketNotificationConfigurationResponsePrivate
 *
 * \brief Private implementation for GetBucketNotificationConfigurationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketNotificationConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketNotificationConfigurationResponse instance.
 */
GetBucketNotificationConfigurationResponsePrivate::GetBucketNotificationConfigurationResponsePrivate(
    GetBucketNotificationConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 GetBucketNotificationConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketNotificationConfigurationResponsePrivate::parseGetBucketNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketNotificationConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
