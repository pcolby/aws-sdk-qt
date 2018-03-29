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

#include "listinstancefleetsresponse.h"
#include "listinstancefleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/**
 * @class  ListInstanceFleetsResponse
 *
 * @brief  Handles EMR ListInstanceFleets responses.
 *
 * @see    EMRClient::listInstanceFleets
 */

/**
 * @brief  Constructs a new ListInstanceFleetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInstanceFleetsResponse::ListInstanceFleetsResponse(
        const ListInstanceFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ListInstanceFleetsResponsePrivate(this), parent)
{
    setRequest(new ListInstanceFleetsRequest(request));
    setReply(reply);
}

const ListInstanceFleetsRequest * ListInstanceFleetsResponse::request() const
{
    Q_D(const ListInstanceFleetsResponse);
    return static_cast<const ListInstanceFleetsRequest *>(d->request);
}

/**
 * @brief  Parse a EMR ListInstanceFleets response.
 *
 * @param  response  Response to parse.
 */
void ListInstanceFleetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInstanceFleetsResponsePrivate
 *
 * @brief  Private implementation for ListInstanceFleetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceFleetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInstanceFleetsResponse instance.
 */
ListInstanceFleetsResponsePrivate::ListInstanceFleetsResponsePrivate(
    ListInstanceFleetsQueueResponse * const q) : ListInstanceFleetsPrivate(q)
{

}

/**
 * @brief  Parse an EMR ListInstanceFleetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInstanceFleetsResponsePrivate::ListInstanceFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceFleetsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
