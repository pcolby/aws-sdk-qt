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

#include "describecrossaccountaccessroleresponse.h"
#include "describecrossaccountaccessroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  DescribeCrossAccountAccessRoleResponse
 *
 * @brief  Handles Inspector DescribeCrossAccountAccessRole responses.
 *
 * @see    InspectorClient::describeCrossAccountAccessRole
 */

/**
 * @brief  Constructs a new DescribeCrossAccountAccessRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCrossAccountAccessRoleResponse::DescribeCrossAccountAccessRoleResponse(
        const DescribeCrossAccountAccessRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeCrossAccountAccessRoleResponsePrivate(this), parent)
{
    setRequest(new DescribeCrossAccountAccessRoleRequest(request));
    setReply(reply);
}

const DescribeCrossAccountAccessRoleRequest * DescribeCrossAccountAccessRoleResponse::request() const
{
    Q_D(const DescribeCrossAccountAccessRoleResponse);
    return static_cast<const DescribeCrossAccountAccessRoleRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector DescribeCrossAccountAccessRole response.
 *
 * @param  response  Response to parse.
 */
void DescribeCrossAccountAccessRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCrossAccountAccessRoleResponsePrivate
 *
 * @brief  Private implementation for DescribeCrossAccountAccessRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCrossAccountAccessRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCrossAccountAccessRoleResponse instance.
 */
DescribeCrossAccountAccessRoleResponsePrivate::DescribeCrossAccountAccessRoleResponsePrivate(
    DescribeCrossAccountAccessRoleQueueResponse * const q) : DescribeCrossAccountAccessRolePrivate(q)
{

}

/**
 * @brief  Parse an Inspector DescribeCrossAccountAccessRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCrossAccountAccessRoleResponsePrivate::DescribeCrossAccountAccessRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCrossAccountAccessRoleResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
