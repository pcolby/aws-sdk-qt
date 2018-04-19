/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listacceptedportfoliosharesresponse.h"
#include "listacceptedportfoliosharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListAcceptedPortfolioSharesResponse
 * \brief The ListAcceptedPortfolioSharesResponse class provides an interace for ServiceCatalog ListAcceptedPortfolioShares responses.
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
 * \sa ServiceCatalogClient::listAcceptedPortfolioShares
 */

/*!
 * Constructs a ListAcceptedPortfolioSharesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAcceptedPortfolioSharesResponse::ListAcceptedPortfolioSharesResponse(
        const ListAcceptedPortfolioSharesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListAcceptedPortfolioSharesResponsePrivate(this), parent)
{
    setRequest(new ListAcceptedPortfolioSharesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAcceptedPortfolioSharesRequest * ListAcceptedPortfolioSharesResponse::request() const
{
    Q_D(const ListAcceptedPortfolioSharesResponse);
    return static_cast<const ListAcceptedPortfolioSharesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListAcceptedPortfolioShares \a response.
 */
void ListAcceptedPortfolioSharesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAcceptedPortfolioSharesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListAcceptedPortfolioSharesResponsePrivate
 * \brief The ListAcceptedPortfolioSharesResponsePrivate class provides private implementation for ListAcceptedPortfolioSharesResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListAcceptedPortfolioSharesResponsePrivate object with public implementation \a q.
 */
ListAcceptedPortfolioSharesResponsePrivate::ListAcceptedPortfolioSharesResponsePrivate(
    ListAcceptedPortfolioSharesResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListAcceptedPortfolioShares response element from \a xml.
 */
void ListAcceptedPortfolioSharesResponsePrivate::parseListAcceptedPortfolioSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAcceptedPortfolioSharesResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
