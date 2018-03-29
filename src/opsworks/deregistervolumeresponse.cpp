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

#include "deregistervolumeresponse.h"
#include "deregistervolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DeregisterVolumeResponse
 *
 * @brief  Handles OpsWorks DeregisterVolume responses.
 *
 * @see    OpsWorksClient::deregisterVolume
 */

/**
 * @brief  Constructs a new DeregisterVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterVolumeResponse::DeregisterVolumeResponse(
        const DeregisterVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeregisterVolumeResponsePrivate(this), parent)
{
    setRequest(new DeregisterVolumeRequest(request));
    setReply(reply);
}

const DeregisterVolumeRequest * DeregisterVolumeResponse::request() const
{
    Q_D(const DeregisterVolumeResponse);
    return static_cast<const DeregisterVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DeregisterVolume response.
 *
 * @param  response  Response to parse.
 */
void DeregisterVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterVolumeResponsePrivate
 *
 * @brief  Private implementation for DeregisterVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterVolumeResponse instance.
 */
DeregisterVolumeResponsePrivate::DeregisterVolumeResponsePrivate(
    DeregisterVolumeResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DeregisterVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterVolumeResponsePrivate::DeregisterVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterVolumeResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
