// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listportfoliosforproductresponse.h"
#include "listportfoliosforproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosForProductResponse
 * \brief The ListPortfoliosForProductResponse class provides an interace for ServiceCatalog ListPortfoliosForProduct responses.
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
 * \sa ServiceCatalogClient::listPortfoliosForProduct
 */

/*!
 * Constructs a ListPortfoliosForProductResponse object for \a reply to \a request, with parent \a parent.
 */
ListPortfoliosForProductResponse::ListPortfoliosForProductResponse(
        const ListPortfoliosForProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPortfoliosForProductResponsePrivate(this), parent)
{
    setRequest(new ListPortfoliosForProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPortfoliosForProductRequest * ListPortfoliosForProductResponse::request() const
{
    Q_D(const ListPortfoliosForProductResponse);
    return static_cast<const ListPortfoliosForProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListPortfoliosForProduct \a response.
 */
void ListPortfoliosForProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPortfoliosForProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosForProductResponsePrivate
 * \brief The ListPortfoliosForProductResponsePrivate class provides private implementation for ListPortfoliosForProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListPortfoliosForProductResponsePrivate object with public implementation \a q.
 */
ListPortfoliosForProductResponsePrivate::ListPortfoliosForProductResponsePrivate(
    ListPortfoliosForProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListPortfoliosForProduct response element from \a xml.
 */
void ListPortfoliosForProductResponsePrivate::parseListPortfoliosForProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPortfoliosForProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
