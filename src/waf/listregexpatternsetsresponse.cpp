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

#include "listregexpatternsetsresponse.h"
#include "listregexpatternsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  ListRegexPatternSetsResponse
 *
 * @brief  Handles WAF ListRegexPatternSets responses.
 *
 * @see    WAFClient::listRegexPatternSets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRegexPatternSetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListRegexPatternSetsResponsePrivate(this), parent)
{
    setRequest(new ListRegexPatternSetsRequest(request));
    setReply(reply);
}

const ListRegexPatternSetsRequest * ListRegexPatternSetsResponse::request() const
{
    Q_D(const ListRegexPatternSetsResponse);
    return static_cast<const ListRegexPatternSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListRegexPatternSets response.
 *
 * @param  response  Response to parse.
 */
void ListRegexPatternSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRegexPatternSetsResponsePrivate
 *
 * @brief  Private implementation for ListRegexPatternSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRegexPatternSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRegexPatternSetsResponse instance.
 */
ListRegexPatternSetsResponsePrivate::ListRegexPatternSetsResponsePrivate(
    ListRegexPatternSetsQueueResponse * const q) : ListRegexPatternSetsPrivate(q)
{

}

/**
 * @brief  Parse an WAF ListRegexPatternSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRegexPatternSetsResponsePrivate::ListRegexPatternSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRegexPatternSetsResponse"));
    /// @todo
}
