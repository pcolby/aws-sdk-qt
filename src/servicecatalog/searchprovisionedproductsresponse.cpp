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

#include "searchprovisionedproductsresponse.h"
#include "searchprovisionedproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::SearchProvisionedProductsResponse
 * \brief The SearchProvisionedProductsResponse class provides an interace for ServiceCatalog SearchProvisionedProducts responses.
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
 * \sa ServiceCatalogClient::searchProvisionedProducts
 */

/*!
 * Constructs a SearchProvisionedProductsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchProvisionedProductsResponse::SearchProvisionedProductsResponse(
        const SearchProvisionedProductsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new SearchProvisionedProductsResponsePrivate(this), parent)
{
    setRequest(new SearchProvisionedProductsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchProvisionedProductsRequest * SearchProvisionedProductsResponse::request() const
{
    Q_D(const SearchProvisionedProductsResponse);
    return static_cast<const SearchProvisionedProductsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog SearchProvisionedProducts \a response.
 */
void SearchProvisionedProductsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchProvisionedProductsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::SearchProvisionedProductsResponsePrivate
 * \brief The SearchProvisionedProductsResponsePrivate class provides private implementation for SearchProvisionedProductsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a SearchProvisionedProductsResponsePrivate object with public implementation \a q.
 */
SearchProvisionedProductsResponsePrivate::SearchProvisionedProductsResponsePrivate(
    SearchProvisionedProductsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog SearchProvisionedProducts response element from \a xml.
 */
void SearchProvisionedProductsResponsePrivate::parseSearchProvisionedProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProvisionedProductsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
