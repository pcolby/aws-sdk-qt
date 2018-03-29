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

#include "listcommandsresponse.h"
#include "listcommandsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListCommandsResponse
 *
 * @brief  Handles SSM ListCommands responses.
 *
 * @see    SSMClient::listCommands
 */

/**
 * @brief  Constructs a new ListCommandsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCommandsResponse::ListCommandsResponse(
        const ListCommandsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListCommandsResponsePrivate(this), parent)
{
    setRequest(new ListCommandsRequest(request));
    setReply(reply);
}

const ListCommandsRequest * ListCommandsResponse::request() const
{
    Q_D(const ListCommandsResponse);
    return static_cast<const ListCommandsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListCommands response.
 *
 * @param  response  Response to parse.
 */
void ListCommandsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListCommandsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCommandsResponsePrivate
 *
 * @brief  Private implementation for ListCommandsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCommandsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCommandsResponse instance.
 */
ListCommandsResponsePrivate::ListCommandsResponsePrivate(
    ListCommandsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM ListCommandsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCommandsResponsePrivate::parseListCommandsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCommandsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
