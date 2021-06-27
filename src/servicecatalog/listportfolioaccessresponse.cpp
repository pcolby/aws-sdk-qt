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

#include "listportfolioaccessresponse.h"
#include "listportfolioaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPortfolioAccessResponse
 * \brief The ListPortfolioAccessResponse class provides an interace for ServiceCatalog ListPortfolioAccess responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::listPortfolioAccess
 */

/*!
 * Constructs a ListPortfolioAccessResponse object for \a reply to \a request, with parent \a parent.
 */
ListPortfolioAccessResponse::ListPortfolioAccessResponse(
        const ListPortfolioAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPortfolioAccessResponsePrivate(this), parent)
{
    setRequest(new ListPortfolioAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPortfolioAccessRequest * ListPortfolioAccessResponse::request() const
{
    return static_cast<const ListPortfolioAccessRequest *>(ServiceCatalogResponse::request());
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListPortfolioAccess \a response.
 */
void ListPortfolioAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPortfolioAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListPortfolioAccessResponsePrivate
 * \brief The ListPortfolioAccessResponsePrivate class provides private implementation for ListPortfolioAccessResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListPortfolioAccessResponsePrivate object with public implementation \a q.
 */
ListPortfolioAccessResponsePrivate::ListPortfolioAccessResponsePrivate(
    ListPortfolioAccessResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListPortfolioAccess response element from \a xml.
 */
void ListPortfolioAccessResponsePrivate::parseListPortfolioAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPortfolioAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
