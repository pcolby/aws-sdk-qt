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

#include "listchildrenresponse.h"
#include "listchildrenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  ListChildrenResponse
 *
 * @brief  Handles Organizations ListChildren responses.
 *
 * @see    OrganizationsClient::listChildren
 */

/**
 * @brief  Constructs a new ListChildrenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListChildrenResponse::ListChildrenResponse(
        const ListChildrenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListChildrenResponsePrivate(this), parent)
{
    setRequest(new ListChildrenRequest(request));
    setReply(reply);
}

const ListChildrenRequest * ListChildrenResponse::request() const
{
    Q_D(const ListChildrenResponse);
    return static_cast<const ListChildrenRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListChildren response.
 *
 * @param  response  Response to parse.
 */
void ListChildrenResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListChildrenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListChildrenResponsePrivate
 *
 * @brief  Private implementation for ListChildrenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListChildrenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListChildrenResponse instance.
 */
ListChildrenResponsePrivate::ListChildrenResponsePrivate(
    ListChildrenResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListChildrenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListChildrenResponsePrivate::parseListChildrenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChildrenResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
