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

#include "listsqlinjectionmatchsetsresponse.h"
#include "listsqlinjectionmatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  ListSqlInjectionMatchSetsResponse
 *
 * @brief  Handles WAFRegional ListSqlInjectionMatchSets responses.
 *
 * @see    WAFRegionalClient::listSqlInjectionMatchSets
 */

/**
 * @brief  Constructs a new ListSqlInjectionMatchSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSqlInjectionMatchSetsResponse::ListSqlInjectionMatchSetsResponse(
        const ListSqlInjectionMatchSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListSqlInjectionMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListSqlInjectionMatchSetsRequest(request));
    setReply(reply);
}

const ListSqlInjectionMatchSetsRequest * ListSqlInjectionMatchSetsResponse::request() const
{
    Q_D(const ListSqlInjectionMatchSetsResponse);
    return static_cast<const ListSqlInjectionMatchSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListSqlInjectionMatchSets response.
 *
 * @param  response  Response to parse.
 */
void ListSqlInjectionMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSqlInjectionMatchSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSqlInjectionMatchSetsResponsePrivate
 *
 * @brief  Private implementation for ListSqlInjectionMatchSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSqlInjectionMatchSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSqlInjectionMatchSetsResponse instance.
 */
ListSqlInjectionMatchSetsResponsePrivate::ListSqlInjectionMatchSetsResponsePrivate(
    ListSqlInjectionMatchSetsResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListSqlInjectionMatchSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSqlInjectionMatchSetsResponsePrivate::parseListSqlInjectionMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSqlInjectionMatchSetsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
