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

#include "startconfigurationrecorderresponse.h"
#include "startconfigurationrecorderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  StartConfigurationRecorderResponse
 *
 * @brief  Handles ConfigService StartConfigurationRecorder responses.
 *
 * @see    ConfigServiceClient::startConfigurationRecorder
 */

/**
 * @brief  Constructs a new StartConfigurationRecorderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartConfigurationRecorderResponse::StartConfigurationRecorderResponse(
        const StartConfigurationRecorderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StartConfigurationRecorderResponse(new StartConfigurationRecorderResponsePrivate(this), parent)
{
    setRequest(new StartConfigurationRecorderRequest(request));
    setReply(reply);
}

const StartConfigurationRecorderRequest * StartConfigurationRecorderResponse::request() const
{
    Q_D(const StartConfigurationRecorderResponse);
    return static_cast<const StartConfigurationRecorderRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService StartConfigurationRecorder response.
 *
 * @param  response  Response to parse.
 */
void StartConfigurationRecorderResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartConfigurationRecorderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartConfigurationRecorderResponsePrivate
 *
 * @brief  Private implementation for StartConfigurationRecorderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartConfigurationRecorderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartConfigurationRecorderResponse instance.
 */
StartConfigurationRecorderResponsePrivate::StartConfigurationRecorderResponsePrivate(
    StartConfigurationRecorderResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService StartConfigurationRecorderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartConfigurationRecorderResponsePrivate::parseStartConfigurationRecorderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartConfigurationRecorderResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
