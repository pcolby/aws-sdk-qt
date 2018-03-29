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

#include "listipsetsresponse.h"
#include "listipsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  ListIPSetsResponse
 *
 * @brief  Handles WAF ListIPSets responses.
 *
 * @see    WAFClient::listIPSets
 */

/**
 * @brief  Constructs a new ListIPSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIPSetsResponse::ListIPSetsResponse(
        const ListIPSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListIPSetsResponsePrivate(this), parent)
{
    setRequest(new ListIPSetsRequest(request));
    setReply(reply);
}

const ListIPSetsRequest * ListIPSetsResponse::request() const
{
    Q_D(const ListIPSetsResponse);
    return static_cast<const ListIPSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListIPSets response.
 *
 * @param  response  Response to parse.
 */
void ListIPSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListIPSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIPSetsResponsePrivate
 *
 * @brief  Private implementation for ListIPSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIPSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIPSetsResponse instance.
 */
ListIPSetsResponsePrivate::ListIPSetsResponsePrivate(
    ListIPSetsResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF ListIPSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIPSetsResponsePrivate::ListIPSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIPSetsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
