// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprovisionedproductplanresponse.h"
#include "deleteprovisionedproductplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisionedProductPlanResponse
 * \brief The DeleteProvisionedProductPlanResponse class provides an interace for ServiceCatalog DeleteProvisionedProductPlan responses.
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
 * \sa ServiceCatalogClient::deleteProvisionedProductPlan
 */

/*!
 * Constructs a DeleteProvisionedProductPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProvisionedProductPlanResponse::DeleteProvisionedProductPlanResponse(
        const DeleteProvisionedProductPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteProvisionedProductPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteProvisionedProductPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProvisionedProductPlanRequest * DeleteProvisionedProductPlanResponse::request() const
{
    Q_D(const DeleteProvisionedProductPlanResponse);
    return static_cast<const DeleteProvisionedProductPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DeleteProvisionedProductPlan \a response.
 */
void DeleteProvisionedProductPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProvisionedProductPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisionedProductPlanResponsePrivate
 * \brief The DeleteProvisionedProductPlanResponsePrivate class provides private implementation for DeleteProvisionedProductPlanResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteProvisionedProductPlanResponsePrivate object with public implementation \a q.
 */
DeleteProvisionedProductPlanResponsePrivate::DeleteProvisionedProductPlanResponsePrivate(
    DeleteProvisionedProductPlanResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DeleteProvisionedProductPlan response element from \a xml.
 */
void DeleteProvisionedProductPlanResponsePrivate::parseDeleteProvisionedProductPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProvisionedProductPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
