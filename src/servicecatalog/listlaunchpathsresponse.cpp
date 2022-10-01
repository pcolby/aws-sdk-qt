// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlaunchpathsresponse.h"
#include "listlaunchpathsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListLaunchPathsResponse
 * \brief The ListLaunchPathsResponse class provides an interace for ServiceCatalog ListLaunchPaths responses.
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
 * \sa ServiceCatalogClient::listLaunchPaths
 */

/*!
 * Constructs a ListLaunchPathsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLaunchPathsResponse::ListLaunchPathsResponse(
        const ListLaunchPathsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListLaunchPathsResponsePrivate(this), parent)
{
    setRequest(new ListLaunchPathsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLaunchPathsRequest * ListLaunchPathsResponse::request() const
{
    Q_D(const ListLaunchPathsResponse);
    return static_cast<const ListLaunchPathsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListLaunchPaths \a response.
 */
void ListLaunchPathsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLaunchPathsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListLaunchPathsResponsePrivate
 * \brief The ListLaunchPathsResponsePrivate class provides private implementation for ListLaunchPathsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListLaunchPathsResponsePrivate object with public implementation \a q.
 */
ListLaunchPathsResponsePrivate::ListLaunchPathsResponsePrivate(
    ListLaunchPathsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListLaunchPaths response element from \a xml.
 */
void ListLaunchPathsResponsePrivate::parseListLaunchPathsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLaunchPathsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
