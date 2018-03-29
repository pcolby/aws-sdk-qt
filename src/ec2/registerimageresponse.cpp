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

#include "registerimageresponse.h"
#include "registerimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  RegisterImageResponse
 *
 * @brief  Handles EC2 RegisterImage responses.
 *
 * @see    EC2Client::registerImage
 */

/**
 * @brief  Constructs a new RegisterImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterImageResponse::RegisterImageResponse(
        const RegisterImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RegisterImageResponsePrivate(this), parent)
{
    setRequest(new RegisterImageRequest(request));
    setReply(reply);
}

const RegisterImageRequest * RegisterImageResponse::request() const
{
    Q_D(const RegisterImageResponse);
    return static_cast<const RegisterImageRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 RegisterImage response.
 *
 * @param  response  Response to parse.
 */
void RegisterImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterImageResponsePrivate
 *
 * @brief  Private implementation for RegisterImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterImageResponse instance.
 */
RegisterImageResponsePrivate::RegisterImageResponsePrivate(
    RegisterImageResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 RegisterImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterImageResponsePrivate::RegisterImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
