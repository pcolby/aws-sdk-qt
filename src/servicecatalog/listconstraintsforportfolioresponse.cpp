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

#include "listconstraintsforportfolioresponse.h"
#include "listconstraintsforportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListConstraintsForPortfolioResponse
 * \brief The ListConstraintsForPortfolioResponse class provides an interace for ServiceCatalog ListConstraintsForPortfolio responses.
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
 * \sa ServiceCatalogClient::listConstraintsForPortfolio
 */

/*!
 * Constructs a ListConstraintsForPortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
ListConstraintsForPortfolioResponse::ListConstraintsForPortfolioResponse(
        const ListConstraintsForPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListConstraintsForPortfolioResponsePrivate(this), parent)
{
    setRequest(new ListConstraintsForPortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConstraintsForPortfolioRequest * ListConstraintsForPortfolioResponse::request() const
{
    Q_D(const ListConstraintsForPortfolioResponse);
    return static_cast<const ListConstraintsForPortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListConstraintsForPortfolio \a response.
 */
void ListConstraintsForPortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConstraintsForPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListConstraintsForPortfolioResponsePrivate
 * \brief The ListConstraintsForPortfolioResponsePrivate class provides private implementation for ListConstraintsForPortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListConstraintsForPortfolioResponsePrivate object with public implementation \a q.
 */
ListConstraintsForPortfolioResponsePrivate::ListConstraintsForPortfolioResponsePrivate(
    ListConstraintsForPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListConstraintsForPortfolio response element from \a xml.
 */
void ListConstraintsForPortfolioResponsePrivate::parseListConstraintsForPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConstraintsForPortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
