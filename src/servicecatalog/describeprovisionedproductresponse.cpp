/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The DescribeProvisionedProductResponse class provides an interace for ServiceCatalog DescribeProvisionedProduct responses.
 *
 * \inmodule QtAwsServiceCatalog
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
 * Constructs a DescribeProvisionedProductResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const DescribeProvisionedProductRequest * DescribeProvisionedProductResponse::request() const
{
    Q_D(const DescribeProvisionedProductResponse);
    return static_cast<const DescribeProvisionedProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeProvisionedProduct \a response.
 */
void DescribeProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProvisionedProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductResponsePrivate
 * \brief The DescribeProvisionedProductResponsePrivate class provides private implementation for DescribeProvisionedProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProvisionedProductResponsePrivate object with public implementation \a q.
 */
DescribeProvisionedProductResponsePrivate::DescribeProvisionedProductResponsePrivate(
    DescribeProvisionedProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeProvisionedProduct response element from \a xml.
 */
void DescribeProvisionedProductResponsePrivate::parseDescribeProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisionedProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
