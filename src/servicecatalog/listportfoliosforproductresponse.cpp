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

#include "listportfoliosforproductresponse.h"
#include "listportfoliosforproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosForProductResponse
 * \brief The ListPortfoliosForProductResponse class provides an interace for ServiceCatalog ListPortfoliosForProduct responses.
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
 * \sa ServiceCatalogClient::listPortfoliosForProduct
 */

/*!
 * Constructs a ListPortfoliosForProductResponse object for \a reply to \a request, with parent \a parent.
 */
ListPortfoliosForProductResponse::ListPortfoliosForProductResponse(
        const ListPortfoliosForProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPortfoliosForProductResponsePrivate(this), parent)
{
    setRequest(new ListPortfoliosForProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPortfoliosForProductRequest * ListPortfoliosForProductResponse::request() const
{
    Q_D(const ListPortfoliosForProductResponse);
    return static_cast<const ListPortfoliosForProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListPortfoliosForProduct \a response.
 */
void ListPortfoliosForProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPortfoliosForProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosForProductResponsePrivate
 * \brief The ListPortfoliosForProductResponsePrivate class provides private implementation for ListPortfoliosForProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListPortfoliosForProductResponsePrivate object with public implementation \a q.
 */
ListPortfoliosForProductResponsePrivate::ListPortfoliosForProductResponsePrivate(
    ListPortfoliosForProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListPortfoliosForProduct response element from \a xml.
 */
void ListPortfoliosForProductResponsePrivate::parseListPortfoliosForProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPortfoliosForProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
