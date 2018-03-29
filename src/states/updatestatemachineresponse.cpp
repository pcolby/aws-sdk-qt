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

#include "updatestatemachineresponse.h"
#include "updatestatemachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  UpdateStateMachineResponse
 *
 * @brief  Handles SFN UpdateStateMachine responses.
 *
 * @see    SFNClient::updateStateMachine
 */

/**
 * @brief  Constructs a new UpdateStateMachineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateStateMachineResponse::UpdateStateMachineResponse(
        const UpdateStateMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new UpdateStateMachineResponsePrivate(this), parent)
{
    setRequest(new UpdateStateMachineRequest(request));
    setReply(reply);
}

const UpdateStateMachineRequest * UpdateStateMachineResponse::request() const
{
    Q_D(const UpdateStateMachineResponse);
    return static_cast<const UpdateStateMachineRequest *>(d->request);
}

/**
 * @brief  Parse a SFN UpdateStateMachine response.
 *
 * @param  response  Response to parse.
 */
void UpdateStateMachineResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateStateMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateStateMachineResponsePrivate
 *
 * @brief  Private implementation for UpdateStateMachineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStateMachineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateStateMachineResponse instance.
 */
UpdateStateMachineResponsePrivate::UpdateStateMachineResponsePrivate(
    UpdateStateMachineResponse * const q) : SFNResponsePrivate(q)
{

}

/**
 * @brief  Parse an SFN UpdateStateMachineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateStateMachineResponsePrivate::UpdateStateMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStateMachineResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
