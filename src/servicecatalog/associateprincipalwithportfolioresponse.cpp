// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
