/*
    Copyright 2013-2021 Paul Colby

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

#include "importasprovisionedproductresponse.h"
#include "importasprovisionedproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ImportAsProvisionedProductResponse
 * \brief The ImportAsProvisionedProductResponse class provides an interace for ServiceCatalog ImportAsProvisionedProduct responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::importAsProvisionedProduct
 */

/*!
 * Constructs a ImportAsProvisionedProductResponse object for \a reply to \a request, with parent \a parent.
 */
ImportAsProvisionedProductResponse::ImportAsProvisionedProductResponse(
        const ImportAsProvisionedProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ImportAsProvisionedProductResponsePrivate(this), parent)
{
    setRequest(new ImportAsProvisionedProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportAsProvisionedProductRequest * ImportAsProvisionedProductResponse::request() const
{
    Q_D(const ImportAsProvisionedProductResponse);
    return static_cast<const ImportAsProvisionedProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ImportAsProvisionedProduct \a response.
 */
void ImportAsProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportAsProvisionedProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ImportAsProvisionedProductResponsePrivate
 * \brief The ImportAsProvisionedProductResponsePrivate class provides private implementation for ImportAsProvisionedProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ImportAsProvisionedProductResponsePrivate object with public implementation \a q.
 */
ImportAsProvisionedProductResponsePrivate::ImportAsProvisionedProductResponsePrivate(
    ImportAsProvisionedProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ImportAsProvisionedProduct response element from \a xml.
 */
void ImportAsProvisionedProductResponsePrivate::parseImportAsProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportAsProvisionedProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
