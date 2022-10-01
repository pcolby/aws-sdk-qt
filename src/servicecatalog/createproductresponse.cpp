// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
