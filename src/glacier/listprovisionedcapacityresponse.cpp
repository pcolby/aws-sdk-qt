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

#include "listprovisionedcapacityresponse.h"
#include "listprovisionedcapacityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  ListProvisionedCapacityResponse
 *
 * @brief  Handles Glacier ListProvisionedCapacity responses.
 *
 * @see    GlacierClient::listProvisionedCapacity
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListProvisionedCapacityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new ListProvisionedCapacityResponsePrivate(this), parent)
{
    setRequest(new ListProvisionedCapacityRequest(request));
    setReply(reply);
}

const ListProvisionedCapacityRequest * ListProvisionedCapacityResponse::request() const
{
    Q_D(const ListProvisionedCapacityResponse);
    return static_cast<const ListProvisionedCapacityRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier ListProvisionedCapacity response.
 *
 * @param  response  Response to parse.
 */
void ListProvisionedCapacityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListProvisionedCapacityResponsePrivate
 *
 * @brief  Private implementation for ListProvisionedCapacityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProvisionedCapacityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListProvisionedCapacityResponse instance.
 */
ListProvisionedCapacityResponsePrivate::ListProvisionedCapacityResponsePrivate(
    ListProvisionedCapacityQueueResponse * const q) : ListProvisionedCapacityPrivate(q)
{

}

/**
 * @brief  Parse an Glacier ListProvisionedCapacityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListProvisionedCapacityResponsePrivate::ListProvisionedCapacityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProvisionedCapacityResponse"));
    /// @todo
}
