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

#include "createprovisionedproductplanresponse.h"
#include "createprovisionedproductplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateProvisionedProductPlanResponse
 * \brief The CreateProvisionedProductPlanResponse class provides an interace for ServiceCatalog CreateProvisionedProductPlan responses.
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
 * \sa ServiceCatalogClient::createProvisionedProductPlan
 */

/*!
 * Constructs a CreateProvisionedProductPlanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProvisionedProductPlanResponse::CreateProvisionedProductPlanResponse(
        const CreateProvisionedProductPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateProvisionedProductPlanResponsePrivate(this), parent)
{
    setRequest(new CreateProvisionedProductPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProvisionedProductPlanRequest * CreateProvisionedProductPlanResponse::request() const
{
    Q_D(const CreateProvisionedProductPlanResponse);
    return static_cast<const CreateProvisionedProductPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog CreateProvisionedProductPlan \a response.
 */
void CreateProvisionedProductPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProvisionedProductPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::CreateProvisionedProductPlanResponsePrivate
 * \brief The CreateProvisionedProductPlanResponsePrivate class provides private implementation for CreateProvisionedProductPlanResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreateProvisionedProductPlanResponsePrivate object with public implementation \a q.
 */
CreateProvisionedProductPlanResponsePrivate::CreateProvisionedProductPlanResponsePrivate(
    CreateProvisionedProductPlanResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog CreateProvisionedProductPlan response element from \a xml.
 */
void CreateProvisionedProductPlanResponsePrivate::parseCreateProvisionedProductPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProvisionedProductPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
