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

#include "isvpcpeeredresponse.h"
#include "isvpcpeeredresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  IsVpcPeeredResponse
 *
 * @brief  Handles Lightsail IsVpcPeered responses.
 *
 * @see    LightsailClient::isVpcPeered
 */

/**
 * @brief  Constructs a new IsVpcPeeredResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
IsVpcPeeredResponse::IsVpcPeeredResponse(
        const IsVpcPeeredRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new IsVpcPeeredResponsePrivate(this), parent)
{
    setRequest(new IsVpcPeeredRequest(request));
    setReply(reply);
}

const IsVpcPeeredRequest * IsVpcPeeredResponse::request() const
{
    Q_D(const IsVpcPeeredResponse);
    return static_cast<const IsVpcPeeredRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail IsVpcPeered response.
 *
 * @param  response  Response to parse.
 */
void IsVpcPeeredResponse::parseSuccess(QIODevice &response)
{
    Q_D(IsVpcPeeredResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  IsVpcPeeredResponsePrivate
 *
 * @brief  Private implementation for IsVpcPeeredResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IsVpcPeeredResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IsVpcPeeredResponse instance.
 */
IsVpcPeeredResponsePrivate::IsVpcPeeredResponsePrivate(
    IsVpcPeeredResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail IsVpcPeeredResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void IsVpcPeeredResponsePrivate::parseIsVpcPeeredResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IsVpcPeeredResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
