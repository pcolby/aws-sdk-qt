// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassociatedresourcesresponse.h"
#include "listassociatedresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedResourcesResponse
 * \brief The ListAssociatedResourcesResponse class provides an interace for ServiceCatalogAppRegistry ListAssociatedResources responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAssociatedResources
 */

/*!
 * Constructs a ListAssociatedResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociatedResourcesResponse::ListAssociatedResourcesResponse(
        const ListAssociatedResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new ListAssociatedResourcesResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociatedResourcesRequest * ListAssociatedResourcesResponse::request() const
{
    Q_D(const ListAssociatedResourcesResponse);
    return static_cast<const ListAssociatedResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry ListAssociatedResources \a response.
 */
void ListAssociatedResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociatedResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedResourcesResponsePrivate
 * \brief The ListAssociatedResourcesResponsePrivate class provides private implementation for ListAssociatedResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAssociatedResourcesResponsePrivate object with public implementation \a q.
 */
ListAssociatedResourcesResponsePrivate::ListAssociatedResourcesResponsePrivate(
    ListAssociatedResourcesResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry ListAssociatedResources response element from \a xml.
 */
void ListAssociatedResourcesResponsePrivate::parseListAssociatedResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
