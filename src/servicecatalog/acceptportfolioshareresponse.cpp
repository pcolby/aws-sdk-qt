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

#include "acceptportfolioshareresponse.h"
#include "acceptportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AcceptPortfolioShareResponse
 * \brief The AcceptPortfolioShareResponse class provides an interace for ServiceCatalog AcceptPortfolioShare responses.
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
 * \sa ServiceCatalogClient::acceptPortfolioShare
 */

/*!
 * Constructs a AcceptPortfolioShareResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptPortfolioShareResponse::AcceptPortfolioShareResponse(
        const AcceptPortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AcceptPortfolioShareResponsePrivate(this), parent)
{
    setRequest(new AcceptPortfolioShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptPortfolioShareRequest * AcceptPortfolioShareResponse::request() const
{
    Q_D(const AcceptPortfolioShareResponse);
    return static_cast<const AcceptPortfolioShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog AcceptPortfolioShare \a response.
 */
void AcceptPortfolioShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptPortfolioShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::AcceptPortfolioShareResponsePrivate
 * \brief The AcceptPortfolioShareResponsePrivate class provides private implementation for AcceptPortfolioShareResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AcceptPortfolioShareResponsePrivate object with public implementation \a q.
 */
AcceptPortfolioShareResponsePrivate::AcceptPortfolioShareResponsePrivate(
    AcceptPortfolioShareResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog AcceptPortfolioShare response element from \a xml.
 */
void AcceptPortfolioShareResponsePrivate::parseAcceptPortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptPortfolioShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
