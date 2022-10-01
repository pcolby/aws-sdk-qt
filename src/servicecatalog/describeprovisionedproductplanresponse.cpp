// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprovisionedproductplanresponse.h"
#include "describeprovisionedproductplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductPlanResponse
 * \brief The DescribeProvisionedProductPlanResponse class provides an interace for ServiceCatalog DescribeProvisionedProductPlan responses.
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
 * \sa ServiceCatalogClient::describeProvisionedProductPlan
 */

/*!
 * Constructs a DescribeProvisionedProductPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProvisionedProductPlanResponse::DescribeProvisionedProductPlanResponse(
        const DescribeProvisionedProductPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisionedProductPlanResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisionedProductPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProvisionedProductPlanRequest * DescribeProvisionedProductPlanResponse::request() const
{
    Q_D(const DescribeProvisionedProductPlanResponse);
    return static_cast<const DescribeProvisionedProductPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeProvisionedProductPlan \a response.
 */
void DescribeProvisionedProductPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProvisionedProductPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductPlanResponsePrivate
 * \brief The DescribeProvisionedProductPlanResponsePrivate class provides private implementation for DescribeProvisionedProductPlanResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProvisionedProductPlanResponsePrivate object with public implementation \a q.
 */
DescribeProvisionedProductPlanResponsePrivate::DescribeProvisionedProductPlanResponsePrivate(
    DescribeProvisionedProductPlanResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeProvisionedProductPlan response element from \a xml.
 */
void DescribeProvisionedProductPlanResponsePrivate::parseDescribeProvisionedProductPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisionedProductPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
