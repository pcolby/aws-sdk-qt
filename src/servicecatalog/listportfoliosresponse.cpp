// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listportfoliosresponse.h"
#include "listportfoliosresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosResponse
 * \brief The ListPortfoliosResponse class provides an interace for ServiceCatalog ListPortfolios responses.
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
 * \sa ServiceCatalogClient::listPortfolios
 */

/*!
 * Constructs a ListPortfoliosResponse object for \a reply to \a request, with parent \a parent.
 */
ListPortfoliosResponse::ListPortfoliosResponse(
        const ListPortfoliosRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPortfoliosResponsePrivate(this), parent)
{
    setRequest(new ListPortfoliosRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPortfoliosRequest * ListPortfoliosResponse::request() const
{
    Q_D(const ListPortfoliosResponse);
    return static_cast<const ListPortfoliosRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListPortfolios \a response.
 */
void ListPortfoliosResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPortfoliosResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosResponsePrivate
 * \brief The ListPortfoliosResponsePrivate class provides private implementation for ListPortfoliosResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListPortfoliosResponsePrivate object with public implementation \a q.
 */
ListPortfoliosResponsePrivate::ListPortfoliosResponsePrivate(
    ListPortfoliosResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListPortfolios response element from \a xml.
 */
void ListPortfoliosResponsePrivate::parseListPortfoliosResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPortfoliosResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
