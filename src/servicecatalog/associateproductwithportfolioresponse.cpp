// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
