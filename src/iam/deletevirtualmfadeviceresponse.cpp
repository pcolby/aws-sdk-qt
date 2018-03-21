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

#include "deletevirtualmfadeviceresponse.h"
#include "deletevirtualmfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeleteVirtualMFADeviceResponse
 *
 * @brief  Handles IAM DeleteVirtualMFADevice responses.
 *
 * @see    IAMClient::deleteVirtualMFADevice
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVirtualMFADeviceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteVirtualMFADeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteVirtualMFADeviceRequest(request));
    setReply(reply);
}

const DeleteVirtualMFADeviceRequest * DeleteVirtualMFADeviceResponse::request() const
{
    Q_D(const DeleteVirtualMFADeviceResponse);
    return static_cast<const DeleteVirtualMFADeviceRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteVirtualMFADevice response.
 *
 * @param  response  Response to parse.
 */
void DeleteVirtualMFADeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVirtualMFADeviceResponsePrivate
 *
 * @brief  Private implementation for DeleteVirtualMFADeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVirtualMFADeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVirtualMFADeviceResponse instance.
 */
DeleteVirtualMFADeviceResponsePrivate::DeleteVirtualMFADeviceResponsePrivate(
    DeleteVirtualMFADeviceQueueResponse * const q) : DeleteVirtualMFADevicePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteVirtualMFADeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVirtualMFADeviceResponsePrivate::DeleteVirtualMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVirtualMFADeviceResponse"));
    /// @todo
}
