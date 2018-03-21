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

#include "listvirtualmfadevicesresponse.h"
#include "listvirtualmfadevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListVirtualMFADevicesResponse
 *
 * @brief  Handles IAM ListVirtualMFADevices responses.
 *
 * @see    IAMClient::listVirtualMFADevices
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVirtualMFADevicesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListVirtualMFADevicesResponsePrivate(this), parent)
{
    setRequest(new ListVirtualMFADevicesRequest(request));
    setReply(reply);
}

const ListVirtualMFADevicesRequest * ListVirtualMFADevicesResponse::request() const
{
    Q_D(const ListVirtualMFADevicesResponse);
    return static_cast<const ListVirtualMFADevicesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListVirtualMFADevices response.
 *
 * @param  response  Response to parse.
 */
void ListVirtualMFADevicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVirtualMFADevicesResponsePrivate
 *
 * @brief  Private implementation for ListVirtualMFADevicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVirtualMFADevicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVirtualMFADevicesResponse instance.
 */
ListVirtualMFADevicesResponsePrivate::ListVirtualMFADevicesResponsePrivate(
    ListVirtualMFADevicesQueueResponse * const q) : ListVirtualMFADevicesPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListVirtualMFADevicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVirtualMFADevicesResponsePrivate::ListVirtualMFADevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVirtualMFADevicesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
