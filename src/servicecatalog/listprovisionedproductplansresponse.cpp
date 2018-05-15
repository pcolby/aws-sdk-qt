/*
    Copyright 2013-2018 Paul Colby

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

#include "listprovisionedproductplansresponse.h"
#include "listprovisionedproductplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListProvisionedProductPlansResponse
 * \brief The ListProvisionedProductPlansResponse class provides an interace for ServiceCatalog ListProvisionedProductPlans responses.
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
 * \sa ServiceCatalogClient::listProvisionedProductPlans
 */

/*!
 * Constructs a ListProvisionedProductPlansResponse object for \a reply to \a request, with parent \a parent.
 */
ListProvisionedProductPlansResponse::ListProvisionedProductPlansResponse(
        const ListProvisionedProductPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListProvisionedProductPlansResponsePrivate(this), parent)
{
    setRequest(new ListProvisionedProductPlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProvisionedProductPlansRequest * ListProvisionedProductPlansResponse::request() const
{
    Q_D(const ListProvisionedProductPlansResponse);
    return static_cast<const ListProvisionedProductPlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListProvisionedProductPlans \a response.
 */
void ListProvisionedProductPlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProvisionedProductPlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListProvisionedProductPlansResponsePrivate
 * \brief The ListProvisionedProductPlansResponsePrivate class provides private implementation for ListProvisionedProductPlansResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListProvisionedProductPlansResponsePrivate object with public implementation \a q.
 */
ListProvisionedProductPlansResponsePrivate::ListProvisionedProductPlansResponsePrivate(
    ListProvisionedProductPlansResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListProvisionedProductPlans response element from \a xml.
 */
void ListProvisionedProductPlansResponsePrivate::parseListProvisionedProductPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProvisionedProductPlansResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
