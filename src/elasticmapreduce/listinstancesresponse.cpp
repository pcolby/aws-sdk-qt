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

#include "listinstancesresponse.h"
#include "listinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  ListInstancesResponse
 *
 * @brief  Handles EMR ListInstances responses.
 *
 * @see    EMRClient::listInstances
 */

/**
 * @brief  Constructs a new ListInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInstancesResponse::ListInstancesResponse(
        const ListInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ListInstancesResponsePrivate(this), parent)
{
    setRequest(new ListInstancesRequest(request));
    setReply(reply);
}

const ListInstancesRequest * ListInstancesResponse::request() const
{
    Q_D(const ListInstancesResponse);
    return static_cast<const ListInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EMR ListInstances response.
 *
 * @param  response  Response to parse.
 */
void ListInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInstancesResponsePrivate
 *
 * @brief  Private implementation for ListInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInstancesResponse instance.
 */
ListInstancesResponsePrivate::ListInstancesResponsePrivate(
    ListInstancesQueueResponse * const q) : ListInstancesPrivate(q)
{

}

/**
 * @brief  Parse an EMR ListInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInstancesResponsePrivate::ListInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstancesResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
