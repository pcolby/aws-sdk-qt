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

#include "listretirablegrantsresponse.h"
#include "listretirablegrantsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  ListRetirableGrantsResponse
 *
 * @brief  Handles KMS ListRetirableGrants responses.
 *
 * @see    KMSClient::listRetirableGrants
 */

/**
 * @brief  Constructs a new ListRetirableGrantsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRetirableGrantsResponse::ListRetirableGrantsResponse(
        const ListRetirableGrantsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ListRetirableGrantsResponsePrivate(this), parent)
{
    setRequest(new ListRetirableGrantsRequest(request));
    setReply(reply);
}

const ListRetirableGrantsRequest * ListRetirableGrantsResponse::request() const
{
    Q_D(const ListRetirableGrantsResponse);
    return static_cast<const ListRetirableGrantsRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ListRetirableGrants response.
 *
 * @param  response  Response to parse.
 */
void ListRetirableGrantsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRetirableGrantsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRetirableGrantsResponsePrivate
 *
 * @brief  Private implementation for ListRetirableGrantsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRetirableGrantsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRetirableGrantsResponse instance.
 */
ListRetirableGrantsResponsePrivate::ListRetirableGrantsResponsePrivate(
    ListRetirableGrantsResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS ListRetirableGrantsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRetirableGrantsResponsePrivate::parseListRetirableGrantsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRetirableGrantsResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
