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

#include "createstatemachineresponse.h"
#include "createstatemachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  CreateStateMachineResponse
 *
 * @brief  Handles SFN CreateStateMachine responses.
 *
 * @see    SFNClient::createStateMachine
 */

/**
 * @brief  Constructs a new CreateStateMachineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStateMachineResponse::CreateStateMachineResponse(
        const CreateStateMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new CreateStateMachineResponsePrivate(this), parent)
{
    setRequest(new CreateStateMachineRequest(request));
    setReply(reply);
}

const CreateStateMachineRequest * CreateStateMachineResponse::request() const
{
    Q_D(const CreateStateMachineResponse);
    return static_cast<const CreateStateMachineRequest *>(d->request);
}

/**
 * @brief  Parse a SFN CreateStateMachine response.
 *
 * @param  response  Response to parse.
 */
void CreateStateMachineResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateStateMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStateMachineResponsePrivate
 *
 * @brief  Private implementation for CreateStateMachineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStateMachineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStateMachineResponse instance.
 */
CreateStateMachineResponsePrivate::CreateStateMachineResponsePrivate(
    CreateStateMachineResponse * const q) : SFNResponsePrivate(q)
{

}

/**
 * @brief  Parse an SFN CreateStateMachineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStateMachineResponsePrivate::parseCreateStateMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStateMachineResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
