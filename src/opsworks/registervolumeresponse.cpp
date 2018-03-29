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

#include "registervolumeresponse.h"
#include "registervolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  RegisterVolumeResponse
 *
 * @brief  Handles OpsWorks RegisterVolume responses.
 *
 * @see    OpsWorksClient::registerVolume
 */

/**
 * @brief  Constructs a new RegisterVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterVolumeResponse::RegisterVolumeResponse(
        const RegisterVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new RegisterVolumeResponsePrivate(this), parent)
{
    setRequest(new RegisterVolumeRequest(request));
    setReply(reply);
}

const RegisterVolumeRequest * RegisterVolumeResponse::request() const
{
    Q_D(const RegisterVolumeResponse);
    return static_cast<const RegisterVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks RegisterVolume response.
 *
 * @param  response  Response to parse.
 */
void RegisterVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterVolumeResponsePrivate
 *
 * @brief  Private implementation for RegisterVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterVolumeResponse instance.
 */
RegisterVolumeResponsePrivate::RegisterVolumeResponsePrivate(
    RegisterVolumeQueueResponse * const q) : RegisterVolumePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks RegisterVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterVolumeResponsePrivate::RegisterVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterVolumeResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
