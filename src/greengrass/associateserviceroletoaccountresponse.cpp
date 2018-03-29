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

#include "associateserviceroletoaccountresponse.h"
#include "associateserviceroletoaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  AssociateServiceRoleToAccountResponse
 *
 * @brief  Handles Greengrass AssociateServiceRoleToAccount responses.
 *
 * @see    GreengrassClient::associateServiceRoleToAccount
 */

/**
 * @brief  Constructs a new AssociateServiceRoleToAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateServiceRoleToAccountResponse::AssociateServiceRoleToAccountResponse(
        const AssociateServiceRoleToAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new AssociateServiceRoleToAccountResponsePrivate(this), parent)
{
    setRequest(new AssociateServiceRoleToAccountRequest(request));
    setReply(reply);
}

const AssociateServiceRoleToAccountRequest * AssociateServiceRoleToAccountResponse::request() const
{
    Q_D(const AssociateServiceRoleToAccountResponse);
    return static_cast<const AssociateServiceRoleToAccountRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass AssociateServiceRoleToAccount response.
 *
 * @param  response  Response to parse.
 */
void AssociateServiceRoleToAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateServiceRoleToAccountResponsePrivate
 *
 * @brief  Private implementation for AssociateServiceRoleToAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateServiceRoleToAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateServiceRoleToAccountResponse instance.
 */
AssociateServiceRoleToAccountResponsePrivate::AssociateServiceRoleToAccountResponsePrivate(
    AssociateServiceRoleToAccountQueueResponse * const q) : AssociateServiceRoleToAccountPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass AssociateServiceRoleToAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateServiceRoleToAccountResponsePrivate::AssociateServiceRoleToAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateServiceRoleToAccountResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
