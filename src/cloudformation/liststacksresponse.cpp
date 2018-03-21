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

#include "liststacksresponse.h"
#include "liststacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  ListStacksResponse
 *
 * @brief  Handles CloudFormation ListStacks responses.
 *
 * @see    CloudFormationClient::listStacks
 */

/**
 * @brief  Constructs a new ListStacksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStacksResponse::ListStacksResponse(
        const ListStacksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListStacksResponsePrivate(this), parent)
{
    setRequest(new ListStacksRequest(request));
    setReply(reply);
}

const ListStacksRequest * ListStacksResponse::request() const
{
    Q_D(const ListStacksResponse);
    return static_cast<const ListStacksRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListStacks response.
 *
 * @param  response  Response to parse.
 */
void ListStacksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStacksResponsePrivate
 *
 * @brief  Private implementation for ListStacksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStacksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStacksResponse instance.
 */
ListStacksResponsePrivate::ListStacksResponsePrivate(
    ListStacksQueueResponse * const q) : ListStacksPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListStacksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStacksResponsePrivate::ListStacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStacksResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
