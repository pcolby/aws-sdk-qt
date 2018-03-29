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

#include "deleteinstanceresponse.h"
#include "deleteinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeleteInstanceResponse
 *
 * @brief  Handles OpsWorks DeleteInstance responses.
 *
 * @see    OpsWorksClient::deleteInstance
 */

/**
 * @brief  Constructs a new DeleteInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInstanceResponse::DeleteInstanceResponse(
        const DeleteInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeleteInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteInstanceRequest(request));
    setReply(reply);
}

const DeleteInstanceRequest * DeleteInstanceResponse::request() const
{
    Q_D(const DeleteInstanceResponse);
    return static_cast<const DeleteInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DeleteInstance response.
 *
 * @param  response  Response to parse.
 */
void DeleteInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInstanceResponsePrivate
 *
 * @brief  Private implementation for DeleteInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInstanceResponse instance.
 */
DeleteInstanceResponsePrivate::DeleteInstanceResponsePrivate(
    DeleteInstanceQueueResponse * const q) : DeleteInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DeleteInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInstanceResponsePrivate::DeleteInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
