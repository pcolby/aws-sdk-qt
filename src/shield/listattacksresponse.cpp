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

#include "listattacksresponse.h"
#include "listattacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/**
 * @class  ListAttacksResponse
 *
 * @brief  Handles Shield ListAttacks responses.
 *
 * @see    ShieldClient::listAttacks
 */

/**
 * @brief  Constructs a new ListAttacksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttacksResponse::ListAttacksResponse(
        const ListAttacksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new ListAttacksResponsePrivate(this), parent)
{
    setRequest(new ListAttacksRequest(request));
    setReply(reply);
}

const ListAttacksRequest * ListAttacksResponse::request() const
{
    Q_D(const ListAttacksResponse);
    return static_cast<const ListAttacksRequest *>(d->request);
}

/**
 * @brief  Parse a Shield ListAttacks response.
 *
 * @param  response  Response to parse.
 */
void ListAttacksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAttacksResponsePrivate
 *
 * @brief  Private implementation for ListAttacksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttacksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAttacksResponse instance.
 */
ListAttacksResponsePrivate::ListAttacksResponsePrivate(
    ListAttacksResponse * const q) : ShieldResponsePrivate(q)
{

}

/**
 * @brief  Parse an Shield ListAttacksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAttacksResponsePrivate::ListAttacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttacksResponse"));
    /// @todo
}

} // namespace Shield
} // namespace QtAws
