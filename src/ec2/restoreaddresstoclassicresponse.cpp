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

#include "restoreaddresstoclassicresponse.h"
#include "restoreaddresstoclassicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  RestoreAddressToClassicResponse
 *
 * @brief  Handles EC2 RestoreAddressToClassic responses.
 *
 * @see    EC2Client::restoreAddressToClassic
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreAddressToClassicResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RestoreAddressToClassicResponsePrivate(this), parent)
{
    setRequest(new RestoreAddressToClassicRequest(request));
    setReply(reply);
}

const RestoreAddressToClassicRequest * RestoreAddressToClassicResponse::request() const
{
    Q_D(const RestoreAddressToClassicResponse);
    return static_cast<const RestoreAddressToClassicRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 RestoreAddressToClassic response.
 *
 * @param  response  Response to parse.
 */
void RestoreAddressToClassicResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreAddressToClassicResponsePrivate
 *
 * @brief  Private implementation for RestoreAddressToClassicResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreAddressToClassicResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreAddressToClassicResponse instance.
 */
RestoreAddressToClassicResponsePrivate::RestoreAddressToClassicResponsePrivate(
    RestoreAddressToClassicQueueResponse * const q) : RestoreAddressToClassicPrivate(q)
{

}

/**
 * @brief  Parse an EC2 RestoreAddressToClassicResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreAddressToClassicResponsePrivate::RestoreAddressToClassicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreAddressToClassicResponse"));
    /// @todo
}
