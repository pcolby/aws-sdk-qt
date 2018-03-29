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

#include "describeproductviewresponse.h"
#include "describeproductviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DescribeProductViewResponse
 *
 * @brief  Handles ServiceCatalog DescribeProductView responses.
 *
 * @see    ServiceCatalogClient::describeProductView
 */

/**
 * @brief  Constructs a new DescribeProductViewResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProductViewResponse::DescribeProductViewResponse(
        const DescribeProductViewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProductViewResponsePrivate(this), parent)
{
    setRequest(new DescribeProductViewRequest(request));
    setReply(reply);
}

const DescribeProductViewRequest * DescribeProductViewResponse::request() const
{
    Q_D(const DescribeProductViewResponse);
    return static_cast<const DescribeProductViewRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeProductView response.
 *
 * @param  response  Response to parse.
 */
void DescribeProductViewResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeProductViewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProductViewResponsePrivate
 *
 * @brief  Private implementation for DescribeProductViewResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProductViewResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProductViewResponse instance.
 */
DescribeProductViewResponsePrivate::DescribeProductViewResponsePrivate(
    DescribeProductViewResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeProductViewResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProductViewResponsePrivate::DescribeProductViewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProductViewResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
