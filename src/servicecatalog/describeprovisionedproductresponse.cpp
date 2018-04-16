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

#include "describeprovisionedproductresponse.h"
#include "describeprovisionedproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductResponse
 *
 * \brief The DescribeProvisionedProductResponse class encapsulates ServiceCatalog DescribeProvisionedProduct responses.
 *
 * \ingroup ServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::describeProvisionedProduct
 */

/*!
 * @brief  Constructs a new DescribeProvisionedProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProvisionedProductResponse::DescribeProvisionedProductResponse(
        const DescribeProvisionedProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisionedProductResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisionedProductRequest(request));
    setReply(reply);
}

const DescribeProvisionedProductRequest * DescribeProvisionedProductResponse::request() const
{
    Q_D(const DescribeProvisionedProductResponse);
    return static_cast<const DescribeProvisionedProductRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceCatalog DescribeProvisionedProduct response.
 *
 * @param  response  Response to parse.
 */
void DescribeProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeProvisionedProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeProvisionedProductResponsePrivate
 *
 * \brief Private implementation for DescribeProvisionedProductResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeProvisionedProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProvisionedProductResponse instance.
 */
DescribeProvisionedProductResponsePrivate::DescribeProvisionedProductResponsePrivate(
    DescribeProvisionedProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceCatalog DescribeProvisionedProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProvisionedProductResponsePrivate::parseDescribeProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisionedProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
