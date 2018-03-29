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

#include "createtapewithbarcoderesponse.h"
#include "createtapewithbarcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  CreateTapeWithBarcodeResponse
 *
 * @brief  Handles StorageGateway CreateTapeWithBarcode responses.
 *
 * @see    StorageGatewayClient::createTapeWithBarcode
 */

/**
 * @brief  Constructs a new CreateTapeWithBarcodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTapeWithBarcodeResponse::CreateTapeWithBarcodeResponse(
        const CreateTapeWithBarcodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new CreateTapeWithBarcodeResponsePrivate(this), parent)
{
    setRequest(new CreateTapeWithBarcodeRequest(request));
    setReply(reply);
}

const CreateTapeWithBarcodeRequest * CreateTapeWithBarcodeResponse::request() const
{
    Q_D(const CreateTapeWithBarcodeResponse);
    return static_cast<const CreateTapeWithBarcodeRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway CreateTapeWithBarcode response.
 *
 * @param  response  Response to parse.
 */
void CreateTapeWithBarcodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTapeWithBarcodeResponsePrivate
 *
 * @brief  Private implementation for CreateTapeWithBarcodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTapeWithBarcodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTapeWithBarcodeResponse instance.
 */
CreateTapeWithBarcodeResponsePrivate::CreateTapeWithBarcodeResponsePrivate(
    CreateTapeWithBarcodeQueueResponse * const q) : CreateTapeWithBarcodePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway CreateTapeWithBarcodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTapeWithBarcodeResponsePrivate::CreateTapeWithBarcodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTapeWithBarcodeResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
