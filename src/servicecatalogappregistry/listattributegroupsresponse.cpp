// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattributegroupsresponse.h"
#include "listattributegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsResponse
 * \brief The ListAttributeGroupsResponse class provides an interace for ServiceCatalogAppRegistry ListAttributeGroups responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAttributeGroups
 */

/*!
 * Constructs a ListAttributeGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttributeGroupsResponse::ListAttributeGroupsResponse(
        const ListAttributeGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new ListAttributeGroupsResponsePrivate(this), parent)
{
    setRequest(new ListAttributeGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttributeGroupsRequest * ListAttributeGroupsResponse::request() const
{
    Q_D(const ListAttributeGroupsResponse);
    return static_cast<const ListAttributeGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry ListAttributeGroups \a response.
 */
void ListAttributeGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttributeGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsResponsePrivate
 * \brief The ListAttributeGroupsResponsePrivate class provides private implementation for ListAttributeGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAttributeGroupsResponsePrivate object with public implementation \a q.
 */
ListAttributeGroupsResponsePrivate::ListAttributeGroupsResponsePrivate(
    ListAttributeGroupsResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry ListAttributeGroups response element from \a xml.
 */
void ListAttributeGroupsResponsePrivate::parseListAttributeGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttributeGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
