/*
    Copyright 2013-2020 Paul Colby

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

#include "scanprovisionedproductsresponse.h"
#include "scanprovisionedproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ScanProvisionedProductsResponse
 * \brief The ScanProvisionedProductsResponse class provides an interace for ServiceCatalog ScanProvisionedProducts responses.
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
 * \sa ServiceCatalogClient::scanProvisionedProducts
 */

/*!
 * Constructs a ScanProvisionedProductsResponse object for \a reply to \a request, with parent \a parent.
 */
ScanProvisionedProductsResponse::ScanProvisionedProductsResponse(
        const ScanProvisionedProductsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ScanProvisionedProductsResponsePrivate(this), parent)
{
    setRequest(new ScanProvisionedProductsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ScanProvisionedProductsRequest * ScanProvisionedProductsResponse::request() const
{
    Q_D(const ScanProvisionedProductsResponse);
    return static_cast<const ScanProvisionedProductsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ScanProvisionedProducts \a response.
 */
void ScanProvisionedProductsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ScanProvisionedProductsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ScanProvisionedProductsResponsePrivate
 * \brief The ScanProvisionedProductsResponsePrivate class provides private implementation for ScanProvisionedProductsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ScanProvisionedProductsResponsePrivate object with public implementation \a q.
 */
ScanProvisionedProductsResponsePrivate::ScanProvisionedProductsResponsePrivate(
    ScanProvisionedProductsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ScanProvisionedProducts response element from \a xml.
 */
void ScanProvisionedProductsResponsePrivate::parseScanProvisionedProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScanProvisionedProductsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
