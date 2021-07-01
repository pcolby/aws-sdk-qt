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

#include "associateprincipalwithportfolioresponse.h"
#include "associateprincipalwithportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociatePrincipalWithPortfolioResponse
 * \brief The AssociatePrincipalWithPortfolioResponse class provides an interace for ServiceCatalog AssociatePrincipalWithPortfolio responses.
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
 * \sa ServiceCatalogClient::associatePrincipalWithPortfolio
 */

/*!
 * Constructs a AssociatePrincipalWithPortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
AssociatePrincipalWithPortfolioResponse::AssociatePrincipalWithPortfolioResponse(
        const AssociatePrincipalWithPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociatePrincipalWithPortfolioResponsePrivate(this), parent)
{
    setRequest(new AssociatePrincipalWithPortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociatePrincipalWithPortfolioRequest * AssociatePrincipalWithPortfolioResponse::request() const
{
    Q_D(const AssociatePrincipalWithPortfolioResponse);
    return static_cast<const AssociatePrincipalWithPortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog AssociatePrincipalWithPortfolio \a response.
 */
void AssociatePrincipalWithPortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociatePrincipalWithPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::AssociatePrincipalWithPortfolioResponsePrivate
 * \brief The AssociatePrincipalWithPortfolioResponsePrivate class provides private implementation for AssociatePrincipalWithPortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociatePrincipalWithPortfolioResponsePrivate object with public implementation \a q.
 */
AssociatePrincipalWithPortfolioResponsePrivate::AssociatePrincipalWithPortfolioResponsePrivate(
    AssociatePrincipalWithPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog AssociatePrincipalWithPortfolio response element from \a xml.
 */
void AssociatePrincipalWithPortfolioResponsePrivate::parseAssociatePrincipalWithPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociatePrincipalWithPortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
