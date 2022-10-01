// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateproductfromportfolioresponse.h"
#include "disassociateproductfromportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateProductFromPortfolioResponse
 * \brief The DisassociateProductFromPortfolioResponse class provides an interace for ServiceCatalog DisassociateProductFromPortfolio responses.
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
 * \sa ServiceCatalogClient::disassociateProductFromPortfolio
 */

/*!
 * Constructs a DisassociateProductFromPortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateProductFromPortfolioResponse::DisassociateProductFromPortfolioResponse(
        const DisassociateProductFromPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociateProductFromPortfolioResponsePrivate(this), parent)
{
    setRequest(new DisassociateProductFromPortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateProductFromPortfolioRequest * DisassociateProductFromPortfolioResponse::request() const
{
    Q_D(const DisassociateProductFromPortfolioResponse);
    return static_cast<const DisassociateProductFromPortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DisassociateProductFromPortfolio \a response.
 */
void DisassociateProductFromPortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateProductFromPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateProductFromPortfolioResponsePrivate
 * \brief The DisassociateProductFromPortfolioResponsePrivate class provides private implementation for DisassociateProductFromPortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateProductFromPortfolioResponsePrivate object with public implementation \a q.
 */
DisassociateProductFromPortfolioResponsePrivate::DisassociateProductFromPortfolioResponsePrivate(
    DisassociateProductFromPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DisassociateProductFromPortfolio response element from \a xml.
 */
void DisassociateProductFromPortfolioResponsePrivate::parseDisassociateProductFromPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateProductFromPortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
