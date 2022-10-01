// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listserviceactionsresponse.h"
#include "listserviceactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListServiceActionsResponse
 * \brief The ListServiceActionsResponse class provides an interace for ServiceCatalog ListServiceActions responses.
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
 * \sa ServiceCatalogClient::listServiceActions
 */

/*!
 * Constructs a ListServiceActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListServiceActionsResponse::ListServiceActionsResponse(
        const ListServiceActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListServiceActionsResponsePrivate(this), parent)
{
    setRequest(new ListServiceActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServiceActionsRequest * ListServiceActionsResponse::request() const
{
    Q_D(const ListServiceActionsResponse);
    return static_cast<const ListServiceActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListServiceActions \a response.
 */
void ListServiceActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServiceActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListServiceActionsResponsePrivate
 * \brief The ListServiceActionsResponsePrivate class provides private implementation for ListServiceActionsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListServiceActionsResponsePrivate object with public implementation \a q.
 */
ListServiceActionsResponsePrivate::ListServiceActionsResponsePrivate(
    ListServiceActionsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListServiceActions response element from \a xml.
 */
void ListServiceActionsResponsePrivate::parseListServiceActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServiceActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
