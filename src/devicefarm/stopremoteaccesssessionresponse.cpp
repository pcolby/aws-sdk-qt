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

#include "stopremoteaccesssessionresponse.h"
#include "stopremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  StopRemoteAccessSessionResponse
 *
 * @brief  Handles DeviceFarm StopRemoteAccessSession responses.
 *
 * @see    DeviceFarmClient::stopRemoteAccessSession
 */

/**
 * @brief  Constructs a new StopRemoteAccessSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopRemoteAccessSessionResponse::StopRemoteAccessSessionResponse(
        const StopRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new StopRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new StopRemoteAccessSessionRequest(request));
    setReply(reply);
}

const StopRemoteAccessSessionRequest * StopRemoteAccessSessionResponse::request() const
{
    Q_D(const StopRemoteAccessSessionResponse);
    return static_cast<const StopRemoteAccessSessionRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm StopRemoteAccessSession response.
 *
 * @param  response  Response to parse.
 */
void StopRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopRemoteAccessSessionResponsePrivate
 *
 * @brief  Private implementation for StopRemoteAccessSessionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopRemoteAccessSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopRemoteAccessSessionResponse instance.
 */
StopRemoteAccessSessionResponsePrivate::StopRemoteAccessSessionResponsePrivate(
    StopRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm StopRemoteAccessSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopRemoteAccessSessionResponsePrivate::StopRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopRemoteAccessSessionResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
