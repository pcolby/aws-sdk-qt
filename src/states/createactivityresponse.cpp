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

#include "createactivityresponse.h"
#include "createactivityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SFN {

/**
 * @class  CreateActivityResponse
 *
 * @brief  Handles SFN CreateActivity responses.
 *
 * @see    SFNClient::createActivity
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateActivityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new CreateActivityResponsePrivate(this), parent)
{
    setRequest(new CreateActivityRequest(request));
    setReply(reply);
}

const CreateActivityRequest * CreateActivityResponse::request() const
{
    Q_D(const CreateActivityResponse);
    return static_cast<const CreateActivityRequest *>(d->request);
}

/**
 * @brief  Parse a SFN CreateActivity response.
 *
 * @param  response  Response to parse.
 */
void CreateActivityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateActivityResponsePrivate
 *
 * @brief  Private implementation for CreateActivityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateActivityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateActivityResponse instance.
 */
CreateActivityResponsePrivate::CreateActivityResponsePrivate(
    CreateActivityQueueResponse * const q) : CreateActivityPrivate(q)
{

}

/**
 * @brief  Parse an SFN CreateActivityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateActivityResponsePrivate::CreateActivityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateActivityResponse"));
    /// @todo
}
