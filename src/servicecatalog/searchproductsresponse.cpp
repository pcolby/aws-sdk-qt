// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchproductsresponse.h"
#include "searchproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::SearchProductsResponse
 * \brief The SearchProductsResponse class provides an interace for ServiceCatalog SearchProducts responses.
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
 * \sa ServiceCatalogClient::searchProducts
 */

/*!
 * Constructs a SearchProductsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchProductsResponse::SearchProductsResponse(
        const SearchProductsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new SearchProductsResponsePrivate(this), parent)
{
    setRequest(new SearchProductsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchProductsRequest * SearchProductsResponse::request() const
{
    Q_D(const SearchProductsResponse);
    return static_cast<const SearchProductsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog SearchProducts \a response.
 */
void SearchProductsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchProductsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::SearchProductsResponsePrivate
 * \brief The SearchProductsResponsePrivate class provides private implementation for SearchProductsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a SearchProductsResponsePrivate object with public implementation \a q.
 */
SearchProductsResponsePrivate::SearchProductsResponsePrivate(
    SearchProductsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog SearchProducts response element from \a xml.
 */
void SearchProductsResponsePrivate::parseSearchProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProductsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
