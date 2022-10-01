// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststackinstancesforprovisionedproductresponse.h"
#include "liststackinstancesforprovisionedproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListStackInstancesForProvisionedProductResponse
 * \brief The ListStackInstancesForProvisionedProductResponse class provides an interace for ServiceCatalog ListStackInstancesForProvisionedProduct responses.
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
 * \sa ServiceCatalogClient::listStackInstancesForProvisionedProduct
 */

/*!
 * Constructs a ListStackInstancesForProvisionedProductResponse object for \a reply to \a request, with parent \a parent.
 */
ListStackInstancesForProvisionedProductResponse::ListStackInstancesForProvisionedProductResponse(
        const ListStackInstancesForProvisionedProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListStackInstancesForProvisionedProductResponsePrivate(this), parent)
{
    setRequest(new ListStackInstancesForProvisionedProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStackInstancesForProvisionedProductRequest * ListStackInstancesForProvisionedProductResponse::request() const
{
    Q_D(const ListStackInstancesForProvisionedProductResponse);
    return static_cast<const ListStackInstancesForProvisionedProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListStackInstancesForProvisionedProduct \a response.
 */
void ListStackInstancesForProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStackInstancesForProvisionedProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListStackInstancesForProvisionedProductResponsePrivate
 * \brief The ListStackInstancesForProvisionedProductResponsePrivate class provides private implementation for ListStackInstancesForProvisionedProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListStackInstancesForProvisionedProductResponsePrivate object with public implementation \a q.
 */
ListStackInstancesForProvisionedProductResponsePrivate::ListStackInstancesForProvisionedProductResponsePrivate(
    ListStackInstancesForProvisionedProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListStackInstancesForProvisionedProduct response element from \a xml.
 */
void ListStackInstancesForProvisionedProductResponsePrivate::parseListStackInstancesForProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStackInstancesForProvisionedProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
