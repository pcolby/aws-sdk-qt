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

#include "getbucketloggingresponse.h"
#include "getbucketloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLoggingResponse
 *
 * \brief The GetBucketLoggingResponse class provides an interace for S3 GetBucketLogging responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketLogging
 */

/*!
 * @brief  Constructs a new GetBucketLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketLoggingResponse::GetBucketLoggingResponse(
        const GetBucketLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLoggingResponsePrivate(this), parent)
{
    setRequest(new GetBucketLoggingRequest(request));
    setReply(reply);
}

const GetBucketLoggingRequest * GetBucketLoggingResponse::request() const
{
    Q_D(const GetBucketLoggingResponse);
    return static_cast<const GetBucketLoggingRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 GetBucketLogging response.
 *
 * @param  response  Response to parse.
 */
void GetBucketLoggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketLoggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetBucketLoggingResponsePrivate
 *
 * \brief Private implementation for GetBucketLoggingResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketLoggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketLoggingResponse instance.
 */
GetBucketLoggingResponsePrivate::GetBucketLoggingResponsePrivate(
    GetBucketLoggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 GetBucketLoggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketLoggingResponsePrivate::parseGetBucketLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLoggingResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
