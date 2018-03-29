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

#include "stopstreamencryptionresponse.h"
#include "stopstreamencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  StopStreamEncryptionResponse
 *
 * @brief  Handles Kinesis StopStreamEncryption responses.
 *
 * @see    KinesisClient::stopStreamEncryption
 */

/**
 * @brief  Constructs a new StopStreamEncryptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopStreamEncryptionResponse::StopStreamEncryptionResponse(
        const StopStreamEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new StopStreamEncryptionResponsePrivate(this), parent)
{
    setRequest(new StopStreamEncryptionRequest(request));
    setReply(reply);
}

const StopStreamEncryptionRequest * StopStreamEncryptionResponse::request() const
{
    Q_D(const StopStreamEncryptionResponse);
    return static_cast<const StopStreamEncryptionRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis StopStreamEncryption response.
 *
 * @param  response  Response to parse.
 */
void StopStreamEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopStreamEncryptionResponsePrivate
 *
 * @brief  Private implementation for StopStreamEncryptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopStreamEncryptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopStreamEncryptionResponse instance.
 */
StopStreamEncryptionResponsePrivate::StopStreamEncryptionResponsePrivate(
    StopStreamEncryptionQueueResponse * const q) : StopStreamEncryptionPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis StopStreamEncryptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopStreamEncryptionResponsePrivate::StopStreamEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopStreamEncryptionResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
