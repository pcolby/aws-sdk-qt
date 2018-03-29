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

#include "listaccountsforparentresponse.h"
#include "listaccountsforparentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  ListAccountsForParentResponse
 *
 * @brief  Handles Organizations ListAccountsForParent responses.
 *
 * @see    OrganizationsClient::listAccountsForParent
 */

/**
 * @brief  Constructs a new ListAccountsForParentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAccountsForParentResponse::ListAccountsForParentResponse(
        const ListAccountsForParentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListAccountsForParentResponse(new ListAccountsForParentResponsePrivate(this), parent)
{
    setRequest(new ListAccountsForParentRequest(request));
    setReply(reply);
}

const ListAccountsForParentRequest * ListAccountsForParentResponse::request() const
{
    Q_D(const ListAccountsForParentResponse);
    return static_cast<const ListAccountsForParentRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListAccountsForParent response.
 *
 * @param  response  Response to parse.
 */
void ListAccountsForParentResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAccountsForParentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAccountsForParentResponsePrivate
 *
 * @brief  Private implementation for ListAccountsForParentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountsForParentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAccountsForParentResponse instance.
 */
ListAccountsForParentResponsePrivate::ListAccountsForParentResponsePrivate(
    ListAccountsForParentResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListAccountsForParentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAccountsForParentResponsePrivate::parseListAccountsForParentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountsForParentResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
