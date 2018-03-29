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

#include "listxssmatchsetsresponse.h"
#include "listxssmatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  ListXssMatchSetsResponse
 *
 * @brief  Handles WAF ListXssMatchSets responses.
 *
 * @see    WAFClient::listXssMatchSets
 */

/**
 * @brief  Constructs a new ListXssMatchSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListXssMatchSetsResponse::ListXssMatchSetsResponse(
        const ListXssMatchSetsRequest &request,
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
    ListXssMatchSetsResponse * const q) : WAFResponsePrivate(q)
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
} // namespace QtAws
