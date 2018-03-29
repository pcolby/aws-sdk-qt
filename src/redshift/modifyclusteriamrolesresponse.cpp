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

#include "modifyclusteriamrolesresponse.h"
#include "modifyclusteriamrolesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  ModifyClusterIamRolesResponse
 *
 * @brief  Handles Redshift ModifyClusterIamRoles responses.
 *
 * @see    RedshiftClient::modifyClusterIamRoles
 */

/**
 * @brief  Constructs a new ModifyClusterIamRolesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyClusterIamRolesResponse::ModifyClusterIamRolesResponse(
        const ModifyClusterIamRolesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ModifyClusterIamRolesResponse(new ModifyClusterIamRolesResponsePrivate(this), parent)
{
    setRequest(new ModifyClusterIamRolesRequest(request));
    setReply(reply);
}

const ModifyClusterIamRolesRequest * ModifyClusterIamRolesResponse::request() const
{
    Q_D(const ModifyClusterIamRolesResponse);
    return static_cast<const ModifyClusterIamRolesRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift ModifyClusterIamRoles response.
 *
 * @param  response  Response to parse.
 */
void ModifyClusterIamRolesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyClusterIamRolesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyClusterIamRolesResponsePrivate
 *
 * @brief  Private implementation for ModifyClusterIamRolesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterIamRolesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyClusterIamRolesResponse instance.
 */
ModifyClusterIamRolesResponsePrivate::ModifyClusterIamRolesResponsePrivate(
    ModifyClusterIamRolesResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift ModifyClusterIamRolesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyClusterIamRolesResponsePrivate::parseModifyClusterIamRolesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyClusterIamRolesResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
