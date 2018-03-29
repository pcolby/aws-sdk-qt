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

#include "disablevpcclassiclinkresponse.h"
#include "disablevpcclassiclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DisableVpcClassicLinkResponse
 *
 * @brief  Handles EC2 DisableVpcClassicLink responses.
 *
 * @see    EC2Client::disableVpcClassicLink
 */

/**
 * @brief  Constructs a new DisableVpcClassicLinkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableVpcClassicLinkResponse::DisableVpcClassicLinkResponse(
        const DisableVpcClassicLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DisableVpcClassicLinkResponsePrivate(this), parent)
{
    setRequest(new DisableVpcClassicLinkRequest(request));
    setReply(reply);
}

const DisableVpcClassicLinkRequest * DisableVpcClassicLinkResponse::request() const
{
    Q_D(const DisableVpcClassicLinkResponse);
    return static_cast<const DisableVpcClassicLinkRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DisableVpcClassicLink response.
 *
 * @param  response  Response to parse.
 */
void DisableVpcClassicLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableVpcClassicLinkResponsePrivate
 *
 * @brief  Private implementation for DisableVpcClassicLinkResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableVpcClassicLinkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableVpcClassicLinkResponse instance.
 */
DisableVpcClassicLinkResponsePrivate::DisableVpcClassicLinkResponsePrivate(
    DisableVpcClassicLinkResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DisableVpcClassicLinkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableVpcClassicLinkResponsePrivate::DisableVpcClassicLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableVpcClassicLinkResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
