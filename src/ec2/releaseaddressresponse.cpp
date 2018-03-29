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

#include "releaseaddressresponse.h"
#include "releaseaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ReleaseAddressResponse
 *
 * @brief  Handles EC2 ReleaseAddress responses.
 *
 * @see    EC2Client::releaseAddress
 */

/**
 * @brief  Constructs a new ReleaseAddressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReleaseAddressResponse::ReleaseAddressResponse(
        const ReleaseAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ReleaseAddressResponsePrivate(this), parent)
{
    setRequest(new ReleaseAddressRequest(request));
    setReply(reply);
}

const ReleaseAddressRequest * ReleaseAddressResponse::request() const
{
    Q_D(const ReleaseAddressResponse);
    return static_cast<const ReleaseAddressRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ReleaseAddress response.
 *
 * @param  response  Response to parse.
 */
void ReleaseAddressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReleaseAddressResponsePrivate
 *
 * @brief  Private implementation for ReleaseAddressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseAddressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReleaseAddressResponse instance.
 */
ReleaseAddressResponsePrivate::ReleaseAddressResponsePrivate(
    ReleaseAddressResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ReleaseAddressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReleaseAddressResponsePrivate::ReleaseAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReleaseAddressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
