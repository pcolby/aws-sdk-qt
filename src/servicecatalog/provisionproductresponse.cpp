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

#include "provisionproductresponse.h"
#include "provisionproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ProvisionProductResponse
 * \brief The ProvisionProductResponse class provides an interace for ServiceCatalog ProvisionProduct responses.
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
 * \sa ServiceCatalogClient::provisionProduct
 */

/*!
 * Constructs a ProvisionProductResponse object for \a reply to \a request, with parent \a parent.
 */
ProvisionProductResponse::ProvisionProductResponse(
        const ProvisionProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ProvisionProductResponsePrivate(this), parent)
{
    setRequest(new ProvisionProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ProvisionProductRequest * ProvisionProductResponse::request() const
{
    Q_D(const ProvisionProductResponse);
    return static_cast<const ProvisionProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ProvisionProduct \a response.
 */
void ProvisionProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ProvisionProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ProvisionProductResponsePrivate
 * \brief The ProvisionProductResponsePrivate class provides private implementation for ProvisionProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ProvisionProductResponsePrivate object with public implementation \a q.
 */
ProvisionProductResponsePrivate::ProvisionProductResponsePrivate(
    ProvisionProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ProvisionProduct response element from \a xml.
 */
void ProvisionProductResponsePrivate::parseProvisionProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ProvisionProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
