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

#include "listgeomatchsetsresponse.h"
#include "listgeomatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  ListGeoMatchSetsResponse
 *
 * @brief  Handles WAFRegional ListGeoMatchSets responses.
 *
 * @see    WAFRegionalClient::listGeoMatchSets
 */

/**
 * @brief  Constructs a new ListGeoMatchSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGeoMatchSetsResponse::ListGeoMatchSetsResponse(
        const ListGeoMatchSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListGeoMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListGeoMatchSetsRequest(request));
    setReply(reply);
}

const ListGeoMatchSetsRequest * ListGeoMatchSetsResponse::request() const
{
    Q_D(const ListGeoMatchSetsResponse);
    return static_cast<const ListGeoMatchSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListGeoMatchSets response.
 *
 * @param  response  Response to parse.
 */
void ListGeoMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListGeoMatchSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGeoMatchSetsResponsePrivate
 *
 * @brief  Private implementation for ListGeoMatchSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoMatchSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGeoMatchSetsResponse instance.
 */
ListGeoMatchSetsResponsePrivate::ListGeoMatchSetsResponsePrivate(
    ListGeoMatchSetsResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListGeoMatchSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGeoMatchSetsResponsePrivate::ListGeoMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeoMatchSetsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
