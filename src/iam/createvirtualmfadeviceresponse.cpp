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

#include "createvirtualmfadeviceresponse.h"
#include "createvirtualmfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreateVirtualMFADeviceResponse
 *
 * @brief  Handles IAM CreateVirtualMFADevice responses.
 *
 * @see    IAMClient::createVirtualMFADevice
 */

/**
 * @brief  Constructs a new CreateVirtualMFADeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVirtualMFADeviceResponse::CreateVirtualMFADeviceResponse(
        const CreateVirtualMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateVirtualMFADeviceResponsePrivate(this), parent)
{
    setRequest(new CreateVirtualMFADeviceRequest(request));
    setReply(reply);
}

const CreateVirtualMFADeviceRequest * CreateVirtualMFADeviceResponse::request() const
{
    Q_D(const CreateVirtualMFADeviceResponse);
    return static_cast<const CreateVirtualMFADeviceRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateVirtualMFADevice response.
 *
 * @param  response  Response to parse.
 */
void CreateVirtualMFADeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVirtualMFADeviceResponsePrivate
 *
 * @brief  Private implementation for CreateVirtualMFADeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVirtualMFADeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVirtualMFADeviceResponse instance.
 */
CreateVirtualMFADeviceResponsePrivate::CreateVirtualMFADeviceResponsePrivate(
    CreateVirtualMFADeviceQueueResponse * const q) : CreateVirtualMFADevicePrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateVirtualMFADeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVirtualMFADeviceResponsePrivate::CreateVirtualMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVirtualMFADeviceResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
