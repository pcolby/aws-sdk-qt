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

#include "listaccountsresponse.h"
#include "listaccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  ListAccountsResponse
 *
 * @brief  Handles Organizations ListAccounts responses.
 *
 * @see    OrganizationsClient::listAccounts
 */

/**
 * @brief  Constructs a new ListAccountsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAccountsResponse::ListAccountsResponse(
        const ListAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListAccountsResponsePrivate(this), parent)
{
    setRequest(new ListAccountsRequest(request));
    setReply(reply);
}

const ListAccountsRequest * ListAccountsResponse::request() const
{
    Q_D(const ListAccountsResponse);
    return static_cast<const ListAccountsRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListAccounts response.
 *
 * @param  response  Response to parse.
 */
void ListAccountsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAccountsResponsePrivate
 *
 * @brief  Private implementation for ListAccountsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAccountsResponse instance.
 */
ListAccountsResponsePrivate::ListAccountsResponsePrivate(
    ListAccountsQueueResponse * const q) : ListAccountsPrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListAccountsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAccountsResponsePrivate::ListAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountsResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
