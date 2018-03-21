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

#include "listaccountaliasesresponse.h"
#include "listaccountaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListAccountAliasesResponse
 *
 * @brief  Handles IAM ListAccountAliases responses.
 *
 * @see    IAMClient::listAccountAliases
 */

/**
 * @brief  Constructs a new ListAccountAliasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAccountAliasesResponse::ListAccountAliasesResponse(
        const ListAccountAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListAccountAliasesResponsePrivate(this), parent)
{
    setRequest(new ListAccountAliasesRequest(request));
    setReply(reply);
}

const ListAccountAliasesRequest * ListAccountAliasesResponse::request() const
{
    Q_D(const ListAccountAliasesResponse);
    return static_cast<const ListAccountAliasesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListAccountAliases response.
 *
 * @param  response  Response to parse.
 */
void ListAccountAliasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAccountAliasesResponsePrivate
 *
 * @brief  Private implementation for ListAccountAliasesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountAliasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAccountAliasesResponse instance.
 */
ListAccountAliasesResponsePrivate::ListAccountAliasesResponsePrivate(
    ListAccountAliasesQueueResponse * const q) : ListAccountAliasesPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListAccountAliasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAccountAliasesResponsePrivate::ListAccountAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountAliasesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
