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

#include "listbuildsresponse.h"
#include "listbuildsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  ListBuildsResponse
 *
 * @brief  Handles GameLift ListBuilds responses.
 *
 * @see    GameLiftClient::listBuilds
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBuildsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new ListBuildsResponsePrivate(this), parent)
{
    setRequest(new ListBuildsRequest(request));
    setReply(reply);
}

const ListBuildsRequest * ListBuildsResponse::request() const
{
    Q_D(const ListBuildsResponse);
    return static_cast<const ListBuildsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift ListBuilds response.
 *
 * @param  response  Response to parse.
 */
void ListBuildsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBuildsResponsePrivate
 *
 * @brief  Private implementation for ListBuildsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBuildsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBuildsResponse instance.
 */
ListBuildsResponsePrivate::ListBuildsResponsePrivate(
    ListBuildsQueueResponse * const q) : ListBuildsPrivate(q)
{

}

/**
 * @brief  Parse an GameLift ListBuildsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBuildsResponsePrivate::ListBuildsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBuildsResponse"));
    /// @todo
}
