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

#include "allocateaddressresponse.h"
#include "allocateaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  AllocateAddressResponse
 *
 * @brief  Handles EC2 AllocateAddress responses.
 *
 * @see    EC2Client::allocateAddress
 */

/**
 * @brief  Constructs a new AllocateAddressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocateAddressResponse::AllocateAddressResponse(
        const AllocateAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AllocateAddressResponse(new AllocateAddressResponsePrivate(this), parent)
{
    setRequest(new AllocateAddressRequest(request));
    setReply(reply);
}

const AllocateAddressRequest * AllocateAddressResponse::request() const
{
    Q_D(const AllocateAddressResponse);
    return static_cast<const AllocateAddressRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AllocateAddress response.
 *
 * @param  response  Response to parse.
 */
void AllocateAddressResponse::parseSuccess(QIODevice &response)
{
    Q_D(AllocateAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AllocateAddressResponsePrivate
 *
 * @brief  Private implementation for AllocateAddressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateAddressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocateAddressResponse instance.
 */
AllocateAddressResponsePrivate::AllocateAddressResponsePrivate(
    AllocateAddressResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 AllocateAddressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocateAddressResponsePrivate::parseAllocateAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateAddressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
