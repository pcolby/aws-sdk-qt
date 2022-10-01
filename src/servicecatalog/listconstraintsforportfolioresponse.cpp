// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconstraintsforportfolioresponse.h"
#include "listconstraintsforportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListConstraintsForPortfolioResponse
 * \brief The ListConstraintsForPortfolioResponse class provides an interace for ServiceCatalog ListConstraintsForPortfolio responses.
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
 * \sa ServiceCatalogClient::listConstraintsForPortfolio
 */

/*!
 * Constructs a ListConstraintsForPortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
ListConstraintsForPortfolioResponse::ListConstraintsForPortfolioResponse(
        const ListConstraintsForPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListConstraintsForPortfolioResponsePrivate(this), parent)
{
    setRequest(new ListConstraintsForPortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConstraintsForPortfolioRequest * ListConstraintsForPortfolioResponse::request() const
{
    Q_D(const ListConstraintsForPortfolioResponse);
    return static_cast<const ListConstraintsForPortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListConstraintsForPortfolio \a response.
 */
void ListConstraintsForPortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConstraintsForPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListConstraintsForPortfolioResponsePrivate
 * \brief The ListConstraintsForPortfolioResponsePrivate class provides private implementation for ListConstraintsForPortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListConstraintsForPortfolioResponsePrivate object with public implementation \a q.
 */
ListConstraintsForPortfolioResponsePrivate::ListConstraintsForPortfolioResponsePrivate(
    ListConstraintsForPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListConstraintsForPortfolio response element from \a xml.
 */
void ListConstraintsForPortfolioResponsePrivate::parseListConstraintsForPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConstraintsForPortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
