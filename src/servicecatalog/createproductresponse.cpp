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

#include "createproductresponse.h"
#include "createproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateProductResponse
 * \brief The CreateProductResponse class provides an interace for ServiceCatalog CreateProduct responses.
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
 * \sa ServiceCatalogClient::createProduct
 */

/*!
 * Constructs a CreateProductResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProductResponse::CreateProductResponse(
        const CreateProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateProductResponsePrivate(this), parent)
{
    setRequest(new CreateProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProductRequest * CreateProductResponse::request() const
{
    Q_D(const CreateProductResponse);
    return static_cast<const CreateProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog CreateProduct \a response.
 */
void CreateProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::CreateProductResponsePrivate
 * \brief The CreateProductResponsePrivate class provides private implementation for CreateProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreateProductResponsePrivate object with public implementation \a q.
 */
CreateProductResponsePrivate::CreateProductResponsePrivate(
    CreateProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog CreateProduct response element from \a xml.
 */
void CreateProductResponsePrivate::parseCreateProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
