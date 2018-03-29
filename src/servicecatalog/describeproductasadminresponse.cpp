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

#include "describeproductasadminresponse.h"
#include "describeproductasadminresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeProductAsAdminResponse
 *
 * @brief  Handles ServiceCatalog DescribeProductAsAdmin responses.
 *
 * @see    ServiceCatalogClient::describeProductAsAdmin
 */

/**
 * @brief  Constructs a new DescribeProductAsAdminResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProductAsAdminResponse::DescribeProductAsAdminResponse(
        const DescribeProductAsAdminRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProductAsAdminResponsePrivate(this), parent)
{
    setRequest(new DescribeProductAsAdminRequest(request));
    setReply(reply);
}

const DescribeProductAsAdminRequest * DescribeProductAsAdminResponse::request() const
{
    Q_D(const DescribeProductAsAdminResponse);
    return static_cast<const DescribeProductAsAdminRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeProductAsAdmin response.
 *
 * @param  response  Response to parse.
 */
void DescribeProductAsAdminResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProductAsAdminResponsePrivate
 *
 * @brief  Private implementation for DescribeProductAsAdminResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProductAsAdminResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProductAsAdminResponse instance.
 */
DescribeProductAsAdminResponsePrivate::DescribeProductAsAdminResponsePrivate(
    DescribeProductAsAdminQueueResponse * const q) : DescribeProductAsAdminPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeProductAsAdminResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProductAsAdminResponsePrivate::DescribeProductAsAdminResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProductAsAdminResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
