// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminateprovisionedproductresponse.h"
#include "terminateprovisionedproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::TerminateProvisionedProductResponse
 * \brief The TerminateProvisionedProductResponse class provides an interace for ServiceCatalog TerminateProvisionedProduct responses.
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
 * \sa ServiceCatalogClient::terminateProvisionedProduct
 */

/*!
 * Constructs a TerminateProvisionedProductResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateProvisionedProductResponse::TerminateProvisionedProductResponse(
        const TerminateProvisionedProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new TerminateProvisionedProductResponsePrivate(this), parent)
{
    setRequest(new TerminateProvisionedProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateProvisionedProductRequest * TerminateProvisionedProductResponse::request() const
{
    Q_D(const TerminateProvisionedProductResponse);
    return static_cast<const TerminateProvisionedProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog TerminateProvisionedProduct \a response.
 */
void TerminateProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateProvisionedProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::TerminateProvisionedProductResponsePrivate
 * \brief The TerminateProvisionedProductResponsePrivate class provides private implementation for TerminateProvisionedProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a TerminateProvisionedProductResponsePrivate object with public implementation \a q.
 */
TerminateProvisionedProductResponsePrivate::TerminateProvisionedProductResponsePrivate(
    TerminateProvisionedProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog TerminateProvisionedProduct response element from \a xml.
 */
void TerminateProvisionedProductResponsePrivate::parseTerminateProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateProvisionedProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
