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

#include "listwebaclsresponse.h"
#include "listwebaclsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  ListWebACLsResponse
 *
 * @brief  Handles WAF ListWebACLs responses.
 *
 * @see    WAFClient::listWebACLs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListWebACLsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListWebACLsResponsePrivate(this), parent)
{
    setRequest(new ListWebACLsRequest(request));
    setReply(reply);
}

const ListWebACLsRequest * ListWebACLsResponse::request() const
{
    Q_D(const ListWebACLsResponse);
    return static_cast<const ListWebACLsRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListWebACLs response.
 *
 * @param  response  Response to parse.
 */
void ListWebACLsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListWebACLsResponsePrivate
 *
 * @brief  Private implementation for ListWebACLsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListWebACLsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListWebACLsResponse instance.
 */
ListWebACLsResponsePrivate::ListWebACLsResponsePrivate(
    ListWebACLsQueueResponse * const q) : ListWebACLsPrivate(q)
{

}

/**
 * @brief  Parse an WAF ListWebACLsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListWebACLsResponsePrivate::ListWebACLsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWebACLsResponse"));
    /// @todo
}
