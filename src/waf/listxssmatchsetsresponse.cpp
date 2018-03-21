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

#include "listxssmatchsetsresponse.h"
#include "listxssmatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  ListXssMatchSetsResponse
 *
 * @brief  Handles WAF ListXssMatchSets responses.
 *
 * @see    WAFClient::listXssMatchSets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListXssMatchSetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListXssMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListXssMatchSetsRequest(request));
    setReply(reply);
}

const ListXssMatchSetsRequest * ListXssMatchSetsResponse::request() const
{
    Q_D(const ListXssMatchSetsResponse);
    return static_cast<const ListXssMatchSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListXssMatchSets response.
 *
 * @param  response  Response to parse.
 */
void ListXssMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListXssMatchSetsResponsePrivate
 *
 * @brief  Private implementation for ListXssMatchSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListXssMatchSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListXssMatchSetsResponse instance.
 */
ListXssMatchSetsResponsePrivate::ListXssMatchSetsResponsePrivate(
    ListXssMatchSetsQueueResponse * const q) : ListXssMatchSetsPrivate(q)
{

}

/**
 * @brief  Parse an WAF ListXssMatchSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListXssMatchSetsResponsePrivate::ListXssMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListXssMatchSetsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
