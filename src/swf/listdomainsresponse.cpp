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

#include "listdomainsresponse.h"
#include "listdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  ListDomainsResponse
 *
 * @brief  Handles SWF ListDomains responses.
 *
 * @see    SWFClient::listDomains
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDomainsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new ListDomainsResponsePrivate(this), parent)
{
    setRequest(new ListDomainsRequest(request));
    setReply(reply);
}

const ListDomainsRequest * ListDomainsResponse::request() const
{
    Q_D(const ListDomainsResponse);
    return static_cast<const ListDomainsRequest *>(d->request);
}

/**
 * @brief  Parse a SWF ListDomains response.
 *
 * @param  response  Response to parse.
 */
void ListDomainsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDomainsResponsePrivate
 *
 * @brief  Private implementation for ListDomainsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDomainsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDomainsResponse instance.
 */
ListDomainsResponsePrivate::ListDomainsResponsePrivate(
    ListDomainsQueueResponse * const q) : ListDomainsPrivate(q)
{

}

/**
 * @brief  Parse an SWF ListDomainsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDomainsResponsePrivate::ListDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainsResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
