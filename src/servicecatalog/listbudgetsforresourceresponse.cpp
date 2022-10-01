// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbudgetsforresourceresponse.h"
#include "listbudgetsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListBudgetsForResourceResponse
 * \brief The ListBudgetsForResourceResponse class provides an interace for ServiceCatalog ListBudgetsForResource responses.
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
 * \sa ServiceCatalogClient::listBudgetsForResource
 */

/*!
 * Constructs a ListBudgetsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ListBudgetsForResourceResponse::ListBudgetsForResourceResponse(
        const ListBudgetsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListBudgetsForResourceResponsePrivate(this), parent)
{
    setRequest(new ListBudgetsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBudgetsForResourceRequest * ListBudgetsForResourceResponse::request() const
{
    Q_D(const ListBudgetsForResourceResponse);
    return static_cast<const ListBudgetsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListBudgetsForResource \a response.
 */
void ListBudgetsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBudgetsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListBudgetsForResourceResponsePrivate
 * \brief The ListBudgetsForResourceResponsePrivate class provides private implementation for ListBudgetsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListBudgetsForResourceResponsePrivate object with public implementation \a q.
 */
ListBudgetsForResourceResponsePrivate::ListBudgetsForResourceResponsePrivate(
    ListBudgetsForResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListBudgetsForResource response element from \a xml.
 */
void ListBudgetsForResourceResponsePrivate::parseListBudgetsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBudgetsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
