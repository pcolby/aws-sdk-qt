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

#include "listprotectionsresponse.h"
#include "listprotectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/**
 * @class  ListProtectionsResponse
 *
 * @brief  Handles Shield ListProtections responses.
 *
 * @see    ShieldClient::listProtections
 */

/**
 * @brief  Constructs a new ListProtectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListProtectionsResponse::ListProtectionsResponse(
        const ListProtectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new ListProtectionsResponsePrivate(this), parent)
{
    setRequest(new ListProtectionsRequest(request));
    setReply(reply);
}

const ListProtectionsRequest * ListProtectionsResponse::request() const
{
    Q_D(const ListProtectionsResponse);
    return static_cast<const ListProtectionsRequest *>(d->request);
}

/**
 * @brief  Parse a Shield ListProtections response.
 *
 * @param  response  Response to parse.
 */
void ListProtectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListProtectionsResponsePrivate
 *
 * @brief  Private implementation for ListProtectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProtectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListProtectionsResponse instance.
 */
ListProtectionsResponsePrivate::ListProtectionsResponsePrivate(
    ListProtectionsQueueResponse * const q) : ListProtectionsPrivate(q)
{

}

/**
 * @brief  Parse an Shield ListProtectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListProtectionsResponsePrivate::ListProtectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProtectionsResponse"));
    /// @todo
}

} // namespace Shield
} // namespace QtAws
