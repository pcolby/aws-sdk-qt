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

#include "startinstanceresponse.h"
#include "startinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  StartInstanceResponse
 *
 * @brief  Handles Lightsail StartInstance responses.
 *
 * @see    LightsailClient::startInstance
 */

/**
 * @brief  Constructs a new StartInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartInstanceResponse::StartInstanceResponse(
        const StartInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new StartInstanceResponsePrivate(this), parent)
{
    setRequest(new StartInstanceRequest(request));
    setReply(reply);
}

const StartInstanceRequest * StartInstanceResponse::request() const
{
    Q_D(const StartInstanceResponse);
    return static_cast<const StartInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail StartInstance response.
 *
 * @param  response  Response to parse.
 */
void StartInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartInstanceResponsePrivate
 *
 * @brief  Private implementation for StartInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartInstanceResponse instance.
 */
StartInstanceResponsePrivate::StartInstanceResponsePrivate(
    StartInstanceResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail StartInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartInstanceResponsePrivate::StartInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartInstanceResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
