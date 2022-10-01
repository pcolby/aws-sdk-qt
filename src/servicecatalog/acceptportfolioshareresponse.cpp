// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
