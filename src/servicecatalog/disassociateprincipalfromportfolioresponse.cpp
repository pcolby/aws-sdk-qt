/*
    Copyright 2013-2020 Paul Colby

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

#include "disassociateprincipalfromportfolioresponse.h"
#include "disassociateprincipalfromportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociatePrincipalFromPortfolioResponse
 * \brief The DisassociatePrincipalFromPortfolioResponse class provides an interace for ServiceCatalog DisassociatePrincipalFromPortfolio responses.
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
 * \sa ServiceCatalogClient::disassociatePrincipalFromPortfolio
 */

/*!
 * Constructs a DisassociatePrincipalFromPortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociatePrincipalFromPortfolioResponse::DisassociatePrincipalFromPortfolioResponse(
        const DisassociatePrincipalFromPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociatePrincipalFromPortfolioResponsePrivate(this), parent)
{
    setRequest(new DisassociatePrincipalFromPortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociatePrincipalFromPortfolioRequest * DisassociatePrincipalFromPortfolioResponse::request() const
{
    Q_D(const DisassociatePrincipalFromPortfolioResponse);
    return static_cast<const DisassociatePrincipalFromPortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DisassociatePrincipalFromPortfolio \a response.
 */
void DisassociatePrincipalFromPortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociatePrincipalFromPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DisassociatePrincipalFromPortfolioResponsePrivate
 * \brief The DisassociatePrincipalFromPortfolioResponsePrivate class provides private implementation for DisassociatePrincipalFromPortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociatePrincipalFromPortfolioResponsePrivate object with public implementation \a q.
 */
DisassociatePrincipalFromPortfolioResponsePrivate::DisassociatePrincipalFromPortfolioResponsePrivate(
    DisassociatePrincipalFromPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DisassociatePrincipalFromPortfolio response element from \a xml.
 */
void DisassociatePrincipalFromPortfolioResponsePrivate::parseDisassociatePrincipalFromPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociatePrincipalFromPortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
