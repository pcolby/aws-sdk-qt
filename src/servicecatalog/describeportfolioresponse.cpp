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

#include "describeportfolioresponse.h"
#include "describeportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DescribePortfolioResponse
 *
 * @brief  Handles ServiceCatalog DescribePortfolio responses.
 *
 * @see    ServiceCatalogClient::describePortfolio
 */

/**
 * @brief  Constructs a new DescribePortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePortfolioResponse::DescribePortfolioResponse(
        const DescribePortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribePortfolioResponsePrivate(this), parent)
{
    setRequest(new DescribePortfolioRequest(request));
    setReply(reply);
}

const DescribePortfolioRequest * DescribePortfolioResponse::request() const
{
    Q_D(const DescribePortfolioResponse);
    return static_cast<const DescribePortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribePortfolio response.
 *
 * @param  response  Response to parse.
 */
void DescribePortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribePortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePortfolioResponsePrivate
 *
 * @brief  Private implementation for DescribePortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePortfolioResponse instance.
 */
DescribePortfolioResponsePrivate::DescribePortfolioResponsePrivate(
    DescribePortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribePortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePortfolioResponsePrivate::DescribePortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
