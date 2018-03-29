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

#include "adduploadbufferresponse.h"
#include "adduploadbufferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  AddUploadBufferResponse
 *
 * @brief  Handles StorageGateway AddUploadBuffer responses.
 *
 * @see    StorageGatewayClient::addUploadBuffer
 */

/**
 * @brief  Constructs a new AddUploadBufferResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddUploadBufferResponse::AddUploadBufferResponse(
        const AddUploadBufferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new AddUploadBufferResponsePrivate(this), parent)
{
    setRequest(new AddUploadBufferRequest(request));
    setReply(reply);
}

const AddUploadBufferRequest * AddUploadBufferResponse::request() const
{
    Q_D(const AddUploadBufferResponse);
    return static_cast<const AddUploadBufferRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway AddUploadBuffer response.
 *
 * @param  response  Response to parse.
 */
void AddUploadBufferResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddUploadBufferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddUploadBufferResponsePrivate
 *
 * @brief  Private implementation for AddUploadBufferResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddUploadBufferResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddUploadBufferResponse instance.
 */
AddUploadBufferResponsePrivate::AddUploadBufferResponsePrivate(
    AddUploadBufferResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway AddUploadBufferResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddUploadBufferResponsePrivate::parseAddUploadBufferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddUploadBufferResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
