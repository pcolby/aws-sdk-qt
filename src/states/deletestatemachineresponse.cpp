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

#include "deletestatemachineresponse.h"
#include "deletestatemachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  DeleteStateMachineResponse
 *
 * @brief  Handles SFN DeleteStateMachine responses.
 *
 * @see    SFNClient::deleteStateMachine
 */

/**
 * @brief  Constructs a new DeleteStateMachineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStateMachineResponse::DeleteStateMachineResponse(
        const DeleteStateMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new DeleteStateMachineResponsePrivate(this), parent)
{
    setRequest(new DeleteStateMachineRequest(request));
    setReply(reply);
}

const DeleteStateMachineRequest * DeleteStateMachineResponse::request() const
{
    Q_D(const DeleteStateMachineResponse);
    return static_cast<const DeleteStateMachineRequest *>(d->request);
}

/**
 * @brief  Parse a SFN DeleteStateMachine response.
 *
 * @param  response  Response to parse.
 */
void DeleteStateMachineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStateMachineResponsePrivate
 *
 * @brief  Private implementation for DeleteStateMachineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStateMachineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStateMachineResponse instance.
 */
DeleteStateMachineResponsePrivate::DeleteStateMachineResponsePrivate(
    DeleteStateMachineQueueResponse * const q) : DeleteStateMachinePrivate(q)
{

}

/**
 * @brief  Parse an SFN DeleteStateMachineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStateMachineResponsePrivate::DeleteStateMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStateMachineResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
