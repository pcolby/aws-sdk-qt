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

#include "describetapesresponse.h"
#include "describetapesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeTapesResponse
 *
 * @brief  Handles StorageGateway DescribeTapes responses.
 *
 * @see    StorageGatewayClient::describeTapes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTapesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeTapesResponsePrivate(this), parent)
{
    setRequest(new DescribeTapesRequest(request));
    setReply(reply);
}

const DescribeTapesRequest * DescribeTapesResponse::request() const
{
    Q_D(const DescribeTapesResponse);
    return static_cast<const DescribeTapesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeTapes response.
 *
 * @param  response  Response to parse.
 */
void DescribeTapesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTapesResponsePrivate
 *
 * @brief  Private implementation for DescribeTapesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTapesResponse instance.
 */
DescribeTapesResponsePrivate::DescribeTapesResponsePrivate(
    DescribeTapesQueueResponse * const q) : DescribeTapesPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeTapesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTapesResponsePrivate::DescribeTapesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTapesResponse"));
    /// @todo
}
