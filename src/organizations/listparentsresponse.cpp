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

#include "listparentsresponse.h"
#include "listparentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  ListParentsResponse
 *
 * @brief  Handles Organizations ListParents responses.
 *
 * @see    OrganizationsClient::listParents
 */

/**
 * @brief  Constructs a new ListParentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListParentsResponse::ListParentsResponse(
        const ListParentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListParentsResponsePrivate(this), parent)
{
    setRequest(new ListParentsRequest(request));
    setReply(reply);
}

const ListParentsRequest * ListParentsResponse::request() const
{
    Q_D(const ListParentsResponse);
    return static_cast<const ListParentsRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListParents response.
 *
 * @param  response  Response to parse.
 */
void ListParentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListParentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListParentsResponsePrivate
 *
 * @brief  Private implementation for ListParentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListParentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListParentsResponse instance.
 */
ListParentsResponsePrivate::ListParentsResponsePrivate(
    ListParentsResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListParentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListParentsResponsePrivate::ListParentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListParentsResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
