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

#include "listsizeconstraintsetsresponse.h"
#include "listsizeconstraintsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListSizeConstraintSetsResponse
 *
 * @brief  Handles WAFRegional ListSizeConstraintSets responses.
 *
 * @see    WAFRegionalClient::listSizeConstraintSets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSizeConstraintSetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListSizeConstraintSetsResponsePrivate(this), parent)
{
    setRequest(new ListSizeConstraintSetsRequest(request));
    setReply(reply);
}

const ListSizeConstraintSetsRequest * ListSizeConstraintSetsResponse::request() const
{
    Q_D(const ListSizeConstraintSetsResponse);
    return static_cast<const ListSizeConstraintSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListSizeConstraintSets response.
 *
 * @param  response  Response to parse.
 */
void ListSizeConstraintSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSizeConstraintSetsResponsePrivate
 *
 * @brief  Private implementation for ListSizeConstraintSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSizeConstraintSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSizeConstraintSetsResponse instance.
 */
ListSizeConstraintSetsResponsePrivate::ListSizeConstraintSetsResponsePrivate(
    ListSizeConstraintSetsQueueResponse * const q) : ListSizeConstraintSetsPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListSizeConstraintSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSizeConstraintSetsResponsePrivate::ListSizeConstraintSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSizeConstraintSetsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
