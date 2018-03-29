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

#include "listcomplianceitemsresponse.h"
#include "listcomplianceitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
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
    : ListComplianceItemsResponse(new ListComplianceItemsResponsePrivate(this), parent)
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
    Q_D(ListComplianceItemsResponse);
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
    ListComplianceItemsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM ListComplianceItemsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListComplianceItemsResponsePrivate::parseListComplianceItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComplianceItemsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
