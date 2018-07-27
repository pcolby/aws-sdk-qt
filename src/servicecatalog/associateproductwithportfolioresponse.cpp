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

#include "associateproductwithportfolioresponse.h"
#include "associateproductwithportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateProductWithPortfolioResponse
 * \brief The AssociateProductWithPortfolioResponse class provides an interace for ServiceCatalog AssociateProductWithPortfolio responses.
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
 * \sa ServiceCatalogClient::associateProductWithPortfolio
 */

/*!
 * Constructs a AssociateProductWithPortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateProductWithPortfolioResponse::AssociateProductWithPortfolioResponse(
        const AssociateProductWithPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociateProductWithPortfolioResponsePrivate(this), parent)
{
    setRequest(new AssociateProductWithPortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateProductWithPortfolioRequest * AssociateProductWithPortfolioResponse::request() const
{
    Q_D(const AssociateProductWithPortfolioResponse);
    return static_cast<const AssociateProductWithPortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog AssociateProductWithPortfolio \a response.
 */
void AssociateProductWithPortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateProductWithPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::AssociateProductWithPortfolioResponsePrivate
 * \brief The AssociateProductWithPortfolioResponsePrivate class provides private implementation for AssociateProductWithPortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateProductWithPortfolioResponsePrivate object with public implementation \a q.
 */
AssociateProductWithPortfolioResponsePrivate::AssociateProductWithPortfolioResponsePrivate(
    AssociateProductWithPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog AssociateProductWithPortfolio response element from \a xml.
 */
void AssociateProductWithPortfolioResponsePrivate::parseAssociateProductWithPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateProductWithPortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
