// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executeprovisionedproductserviceactionresponse.h"
#include "executeprovisionedproductserviceactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductServiceActionResponse
 * \brief The ExecuteProvisionedProductServiceActionResponse class provides an interace for ServiceCatalog ExecuteProvisionedProductServiceAction responses.
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
 * \sa ServiceCatalogClient::executeProvisionedProductServiceAction
 */

/*!
 * Constructs a ExecuteProvisionedProductServiceActionResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteProvisionedProductServiceActionResponse::ExecuteProvisionedProductServiceActionResponse(
        const ExecuteProvisionedProductServiceActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ExecuteProvisionedProductServiceActionResponsePrivate(this), parent)
{
    setRequest(new ExecuteProvisionedProductServiceActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteProvisionedProductServiceActionRequest * ExecuteProvisionedProductServiceActionResponse::request() const
{
    Q_D(const ExecuteProvisionedProductServiceActionResponse);
    return static_cast<const ExecuteProvisionedProductServiceActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ExecuteProvisionedProductServiceAction \a response.
 */
void ExecuteProvisionedProductServiceActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteProvisionedProductServiceActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductServiceActionResponsePrivate
 * \brief The ExecuteProvisionedProductServiceActionResponsePrivate class provides private implementation for ExecuteProvisionedProductServiceActionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ExecuteProvisionedProductServiceActionResponsePrivate object with public implementation \a q.
 */
ExecuteProvisionedProductServiceActionResponsePrivate::ExecuteProvisionedProductServiceActionResponsePrivate(
    ExecuteProvisionedProductServiceActionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ExecuteProvisionedProductServiceAction response element from \a xml.
 */
void ExecuteProvisionedProductServiceActionResponsePrivate::parseExecuteProvisionedProductServiceActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteProvisionedProductServiceActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
