/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startinstanceresponse.h"
#include "startinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  StartInstanceResponse
 *
 * @brief  Handles OpsWorks StartInstance responses.
 *
 * @see    OpsWorksClient::startInstance
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
    : OpsWorksResponse(new StartInstanceResponsePrivate(this), parent)
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
 * @brief  Parse a OpsWorks StartInstance response.
 *
 * @param  response  Response to parse.
 */
void StartInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
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
    StartInstanceQueueResponse * const q) : StartInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks StartInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartInstanceResponsePrivate::StartInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
