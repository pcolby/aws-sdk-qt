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

#include "startstreamencryptionresponse.h"
#include "startstreamencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  StartStreamEncryptionResponse
 *
 * @brief  Handles Kinesis StartStreamEncryption responses.
 *
 * @see    KinesisClient::startStreamEncryption
 */

/**
 * @brief  Constructs a new StartStreamEncryptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartStreamEncryptionResponse::StartStreamEncryptionResponse(
        const StartStreamEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new StartStreamEncryptionResponsePrivate(this), parent)
{
    setRequest(new StartStreamEncryptionRequest(request));
    setReply(reply);
}

const StartStreamEncryptionRequest * StartStreamEncryptionResponse::request() const
{
    Q_D(const StartStreamEncryptionResponse);
    return static_cast<const StartStreamEncryptionRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis StartStreamEncryption response.
 *
 * @param  response  Response to parse.
 */
void StartStreamEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartStreamEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartStreamEncryptionResponsePrivate
 *
 * @brief  Private implementation for StartStreamEncryptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartStreamEncryptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartStreamEncryptionResponse instance.
 */
StartStreamEncryptionResponsePrivate::StartStreamEncryptionResponsePrivate(
    StartStreamEncryptionResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis StartStreamEncryptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartStreamEncryptionResponsePrivate::parseStartStreamEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStreamEncryptionResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
