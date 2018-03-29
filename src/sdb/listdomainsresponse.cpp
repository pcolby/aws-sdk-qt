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

#include "listdomainsresponse.h"
#include "listdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/**
 * @class  ListDomainsResponse
 *
 * @brief  Handles SimpleDB ListDomains responses.
 *
 * @see    SimpleDBClient::listDomains
 */

/**
 * @brief  Constructs a new ListDomainsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDomainsResponse::ListDomainsResponse(
        const ListDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListDomainsResponse(new ListDomainsResponsePrivate(this), parent)
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
 * @brief  Parse a SimpleDB ListDomains response.
 *
 * @param  response  Response to parse.
 */
void ListDomainsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDomainsResponse);
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
    ListDomainsResponse * const q) : SimpleDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB ListDomainsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDomainsResponsePrivate::parseListDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainsResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace QtAws
