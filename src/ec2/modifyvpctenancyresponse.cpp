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

#include "modifyvpctenancyresponse.h"
#include "modifyvpctenancyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyVpcTenancyResponse
 *
 * @brief  Handles EC2 ModifyVpcTenancy responses.
 *
 * @see    EC2Client::modifyVpcTenancy
 */

/**
 * @brief  Constructs a new ModifyVpcTenancyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcTenancyResponse::ModifyVpcTenancyResponse(
        const ModifyVpcTenancyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVpcTenancyResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcTenancyRequest(request));
    setReply(reply);
}

const ModifyVpcTenancyRequest * ModifyVpcTenancyResponse::request() const
{
    Q_D(const ModifyVpcTenancyResponse);
    return static_cast<const ModifyVpcTenancyRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyVpcTenancy response.
 *
 * @param  response  Response to parse.
 */
void ModifyVpcTenancyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyVpcTenancyResponsePrivate
 *
 * @brief  Private implementation for ModifyVpcTenancyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcTenancyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVpcTenancyResponse instance.
 */
ModifyVpcTenancyResponsePrivate::ModifyVpcTenancyResponsePrivate(
    ModifyVpcTenancyResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyVpcTenancyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVpcTenancyResponsePrivate::ModifyVpcTenancyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcTenancyResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
