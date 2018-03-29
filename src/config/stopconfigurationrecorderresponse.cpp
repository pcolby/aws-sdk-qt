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

#include "stopconfigurationrecorderresponse.h"
#include "stopconfigurationrecorderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  StopConfigurationRecorderResponse
 *
 * @brief  Handles ConfigService StopConfigurationRecorder responses.
 *
 * @see    ConfigServiceClient::stopConfigurationRecorder
 */

/**
 * @brief  Constructs a new StopConfigurationRecorderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopConfigurationRecorderResponse::StopConfigurationRecorderResponse(
        const StopConfigurationRecorderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new StopConfigurationRecorderResponsePrivate(this), parent)
{
    setRequest(new StopConfigurationRecorderRequest(request));
    setReply(reply);
}

const StopConfigurationRecorderRequest * StopConfigurationRecorderResponse::request() const
{
    Q_D(const StopConfigurationRecorderResponse);
    return static_cast<const StopConfigurationRecorderRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService StopConfigurationRecorder response.
 *
 * @param  response  Response to parse.
 */
void StopConfigurationRecorderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopConfigurationRecorderResponsePrivate
 *
 * @brief  Private implementation for StopConfigurationRecorderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopConfigurationRecorderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopConfigurationRecorderResponse instance.
 */
StopConfigurationRecorderResponsePrivate::StopConfigurationRecorderResponsePrivate(
    StopConfigurationRecorderResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService StopConfigurationRecorderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopConfigurationRecorderResponsePrivate::StopConfigurationRecorderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopConfigurationRecorderResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
