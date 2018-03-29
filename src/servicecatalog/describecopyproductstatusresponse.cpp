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

#include "describecopyproductstatusresponse.h"
#include "describecopyproductstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DescribeCopyProductStatusResponse
 *
 * @brief  Handles ServiceCatalog DescribeCopyProductStatus responses.
 *
 * @see    ServiceCatalogClient::describeCopyProductStatus
 */

/**
 * @brief  Constructs a new DescribeCopyProductStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCopyProductStatusResponse::DescribeCopyProductStatusResponse(
        const DescribeCopyProductStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeCopyProductStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeCopyProductStatusRequest(request));
    setReply(reply);
}

const DescribeCopyProductStatusRequest * DescribeCopyProductStatusResponse::request() const
{
    Q_D(const DescribeCopyProductStatusResponse);
    return static_cast<const DescribeCopyProductStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeCopyProductStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeCopyProductStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCopyProductStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeCopyProductStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCopyProductStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCopyProductStatusResponse instance.
 */
DescribeCopyProductStatusResponsePrivate::DescribeCopyProductStatusResponsePrivate(
    DescribeCopyProductStatusResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeCopyProductStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCopyProductStatusResponsePrivate::DescribeCopyProductStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCopyProductStatusResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
