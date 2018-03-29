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

#include "listrolealiasesresponse.h"
#include "listrolealiasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListRoleAliasesResponse
 *
 * @brief  Handles IoT ListRoleAliases responses.
 *
 * @see    IoTClient::listRoleAliases
 */

/**
 * @brief  Constructs a new ListRoleAliasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRoleAliasesResponse::ListRoleAliasesResponse(
        const ListRoleAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListRoleAliasesResponsePrivate(this), parent)
{
    setRequest(new ListRoleAliasesRequest(request));
    setReply(reply);
}

const ListRoleAliasesRequest * ListRoleAliasesResponse::request() const
{
    Q_D(const ListRoleAliasesResponse);
    return static_cast<const ListRoleAliasesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListRoleAliases response.
 *
 * @param  response  Response to parse.
 */
void ListRoleAliasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRoleAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRoleAliasesResponsePrivate
 *
 * @brief  Private implementation for ListRoleAliasesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRoleAliasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRoleAliasesResponse instance.
 */
ListRoleAliasesResponsePrivate::ListRoleAliasesResponsePrivate(
    ListRoleAliasesResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListRoleAliasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRoleAliasesResponsePrivate::ListRoleAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRoleAliasesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
