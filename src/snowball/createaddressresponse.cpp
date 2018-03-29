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

#include "createaddressresponse.h"
#include "createaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/**
 * @class  CreateAddressResponse
 *
 * @brief  Handles Snowball CreateAddress responses.
 *
 * @see    SnowballClient::createAddress
 */

/**
 * @brief  Constructs a new CreateAddressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAddressResponse::CreateAddressResponse(
        const CreateAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CreateAddressResponsePrivate(this), parent)
{
    setRequest(new CreateAddressRequest(request));
    setReply(reply);
}

const CreateAddressRequest * CreateAddressResponse::request() const
{
    Q_D(const CreateAddressResponse);
    return static_cast<const CreateAddressRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball CreateAddress response.
 *
 * @param  response  Response to parse.
 */
void CreateAddressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAddressResponsePrivate
 *
 * @brief  Private implementation for CreateAddressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAddressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAddressResponse instance.
 */
CreateAddressResponsePrivate::CreateAddressResponsePrivate(
    CreateAddressResponse * const q) : SnowballResponsePrivate(q)
{

}

/**
 * @brief  Parse an Snowball CreateAddressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAddressResponsePrivate::CreateAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAddressResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
