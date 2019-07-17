/*
    Copyright 2013-2019 Paul Colby

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
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
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
