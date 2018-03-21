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

#include "listcomplianceitemsresponse.h"
#include "listcomplianceitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  ListComplianceItemsResponse
 *
 * @brief  Handles SSM ListComplianceItems responses.
 *
 * @see    SSMClient::listComplianceItems
 */

/**
 * @brief  Constructs a new ListComplianceItemsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListComplianceItemsResponse::ListComplianceItemsResponse(
        const ListComplianceItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListComplianceItemsResponsePrivate(this), parent)
{
    setRequest(new ListComplianceItemsRequest(request));
    setReply(reply);
}

const ListComplianceItemsRequest * ListComplianceItemsResponse::request() const
{
    Q_D(const ListComplianceItemsResponse);
    return static_cast<const ListComplianceItemsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListComplianceItems response.
 *
 * @param  response  Response to parse.
 */
void ListComplianceItemsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListComplianceItemsResponsePrivate
 *
 * @brief  Private implementation for ListComplianceItemsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListComplianceItemsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListComplianceItemsResponse instance.
 */
ListComplianceItemsResponsePrivate::ListComplianceItemsResponsePrivate(
    ListComplianceItemsQueueResponse * const q) : ListComplianceItemsPrivate(q)
{

}

/**
 * @brief  Parse an SSM ListComplianceItemsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListComplianceItemsResponsePrivate::ListComplianceItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComplianceItemsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
