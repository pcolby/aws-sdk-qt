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

#include "listorganizationportfolioaccessresponse.h"
#include "listorganizationportfolioaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListOrganizationPortfolioAccessResponse
 * \brief The ListOrganizationPortfolioAccessResponse class provides an interace for ServiceCatalog ListOrganizationPortfolioAccess responses.
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
 * \sa ServiceCatalogClient::listOrganizationPortfolioAccess
 */

/*!
 * Constructs a ListOrganizationPortfolioAccessResponse object for \a reply to \a request, with parent \a parent.
 */
ListOrganizationPortfolioAccessResponse::ListOrganizationPortfolioAccessResponse(
        const ListOrganizationPortfolioAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListOrganizationPortfolioAccessResponsePrivate(this), parent)
{
    setRequest(new ListOrganizationPortfolioAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOrganizationPortfolioAccessRequest * ListOrganizationPortfolioAccessResponse::request() const
{
    Q_D(const ListOrganizationPortfolioAccessResponse);
    return static_cast<const ListOrganizationPortfolioAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListOrganizationPortfolioAccess \a response.
 */
void ListOrganizationPortfolioAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOrganizationPortfolioAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListOrganizationPortfolioAccessResponsePrivate
 * \brief The ListOrganizationPortfolioAccessResponsePrivate class provides private implementation for ListOrganizationPortfolioAccessResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListOrganizationPortfolioAccessResponsePrivate object with public implementation \a q.
 */
ListOrganizationPortfolioAccessResponsePrivate::ListOrganizationPortfolioAccessResponsePrivate(
    ListOrganizationPortfolioAccessResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListOrganizationPortfolioAccess response element from \a xml.
 */
void ListOrganizationPortfolioAccessResponsePrivate::parseListOrganizationPortfolioAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrganizationPortfolioAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
