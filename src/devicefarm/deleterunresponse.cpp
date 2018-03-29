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

#include "deleterunresponse.h"
#include "deleterunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  DeleteRunResponse
 *
 * @brief  Handles DeviceFarm DeleteRun responses.
 *
 * @see    DeviceFarmClient::deleteRun
 */

/**
 * @brief  Constructs a new DeleteRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRunResponse::DeleteRunResponse(
        const DeleteRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteRunResponsePrivate(this), parent)
{
    setRequest(new DeleteRunRequest(request));
    setReply(reply);
}

const DeleteRunRequest * DeleteRunResponse::request() const
{
    Q_D(const DeleteRunResponse);
    return static_cast<const DeleteRunRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm DeleteRun response.
 *
 * @param  response  Response to parse.
 */
void DeleteRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRunResponsePrivate
 *
 * @brief  Private implementation for DeleteRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRunResponse instance.
 */
DeleteRunResponsePrivate::DeleteRunResponsePrivate(
    DeleteRunQueueResponse * const q) : DeleteRunPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm DeleteRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRunResponsePrivate::DeleteRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRunResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
