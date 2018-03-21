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

#include "createinputresponse.h"
#include "createinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaLive {

/**
 * @class  CreateInputResponse
 *
 * @brief  Handles MediaLive CreateInput responses.
 *
 * @see    MediaLiveClient::createInput
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInputResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateInputResponsePrivate(this), parent)
{
    setRequest(new CreateInputRequest(request));
    setReply(reply);
}

const CreateInputRequest * CreateInputResponse::request() const
{
    Q_D(const CreateInputResponse);
    return static_cast<const CreateInputRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive CreateInput response.
 *
 * @param  response  Response to parse.
 */
void CreateInputResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInputResponsePrivate
 *
 * @brief  Private implementation for CreateInputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInputResponse instance.
 */
CreateInputResponsePrivate::CreateInputResponsePrivate(
    CreateInputQueueResponse * const q) : CreateInputPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive CreateInputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInputResponsePrivate::CreateInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInputResponse"));
    /// @todo
}
