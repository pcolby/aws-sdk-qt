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

#include "searchproductsasadminresponse.h"
#include "searchproductsasadminresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::SearchProductsAsAdminResponse
 * \brief The SearchProductsAsAdminResponse class provides an interace for ServiceCatalog SearchProductsAsAdmin responses.
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
 * \sa ServiceCatalogClient::searchProductsAsAdmin
 */

/*!
 * Constructs a SearchProductsAsAdminResponse object for \a reply to \a request, with parent \a parent.
 */
SearchProductsAsAdminResponse::SearchProductsAsAdminResponse(
        const SearchProductsAsAdminRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new SearchProductsAsAdminResponsePrivate(this), parent)
{
    setRequest(new SearchProductsAsAdminRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchProductsAsAdminRequest * SearchProductsAsAdminResponse::request() const
{
    Q_D(const SearchProductsAsAdminResponse);
    return static_cast<const SearchProductsAsAdminRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog SearchProductsAsAdmin \a response.
 */
void SearchProductsAsAdminResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchProductsAsAdminResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::SearchProductsAsAdminResponsePrivate
 * \brief The SearchProductsAsAdminResponsePrivate class provides private implementation for SearchProductsAsAdminResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a SearchProductsAsAdminResponsePrivate object with public implementation \a q.
 */
SearchProductsAsAdminResponsePrivate::SearchProductsAsAdminResponsePrivate(
    SearchProductsAsAdminResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog SearchProductsAsAdmin response element from \a xml.
 */
void SearchProductsAsAdminResponsePrivate::parseSearchProductsAsAdminResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProductsAsAdminResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
